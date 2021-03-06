// Ben Cherry (bcherry@ucsc.edu) CMPS012B - Winter 05 - Wesley Mackey
// $Id$

import java.io.*;
import static java.lang.System.*;

//NAME
//spellcheck - check spelling of words in a document
//
//SYNOPSIS
//spellcheck [-D] [-ddictionary]...  [-n] [filename]...
//
//DESCRIPTION
//Spellcheck opens each file whose filenames are given on the
//command line and reports spelling errors for words in the file.
//Any word found in the files that is also found in the dictionary
//or auxiliary dictionaries are considered spelled correctly.
//Other words are reported as errors and printed.  Incorrectly
//spelled words are reported to stdout.  Other error messages are
//reported to stderr.
//
//A dictionary is specified as a single large file of words, one
//word per line.  Any number of dictionaries may be specified, and
//all are effectively concatenated together.  Words that appear
//more than once in the dictionaries do not cause a problem, since
//the dictionaries constitute a set.
//
//A word is any sequence of letters, digits, underscores, periods,
//hyphens, ampersands, and apostrophes.  Periods, hyphens,
//ampersands and apostrophes are considered parts of words only if
//they are immediately preceded and followed by a letter or digit.
//A word must contain at least one letter to be recognized as a
//word.  A word is considered to match a word in the dictionary if
//it is spelled in exactly the same way as in the dictionary, or if
//its lower-case form is spelled exactly as in the dictionary.
//
//OPTIONS
//All options must precede all operands, but options themselves may
//appear in any order.  An option is identified by beginning with a
//minus sign (`-') and an option letter.  The argument to an option
//is specified immediately following the letter, with no spaces
//intervening, or as the next word of the command line.
//
//-D   Dump the hash set in debug format to stderr after the
//     dictionaries have been loaded.  The argument filenames are
//     ignored and no spellchecking is done.
//
//-ddictionary
//     In addition to the default dictionary, additional
//     dictionaries may be read.  The -d option may be specified
//     multiple times to include multiple auxiliary dictionaries.
//
//-n   By default, the file /usr/dict/words is used as one of the
//     dictionaries, in addition to whatever other dictionaries are
//     mentioned on the command line.  The -n option causes only
//     the auxiliary dictionaries to be used.  If -n is used
//     without -d, then there are no dictionaries and all words are
//     considered misspelled.
//
//OPERANDS
//Each operand is the name of file that is opened and scanned for
//words.  If no operand filenames are specified, the standard input
//is read, and its filename is printed as a single minus (`-').  If
//operand filenames are given, and one of them is a minus sign, the
//standard input is read at that position as if it could be opened
//as a filename.  In order for a file whose name is `-' to be read,
//it must be specified as `./-'.
//
//EXIT STATUS
//0    No spelling mistakes were found nor errors detected.
//1    There were spelling mistakes found, but no errors detected.
//2    Errors were detected and printed.
//
//SEE ALSO
//java.lang.Character:  isLetter, isLetterOrDigit, toLowerCase.
//java.lang.String:  hashCode, substring, toLowerCase.
//
//BUGS
//Standard spellcheck algorithms for variations on words as to
//number and tense are not performed.  In any case, poems like that
//shown in Figure 1 are likely to confuse most spelling checkers.

class spellcheck {
    public static final int EXIT_SUCCESS = 0;
    public static final int EXIT_MISSPELLING = 1;
    public static final int EXIT_FAILURE = 2;
    private static int exit_code = EXIT_SUCCESS;
    
    public static void main(String[] args) {
        Options options = new Options();
        scanOptions(args, options);
        
        hashset<String> hash = new hashset<String>();
        makeHash(hash, options);
        
        if(options.debugdump == true) {
        	hash.debugDump();
        	exit(exit_code);
        }
        
        readFiles(hash, options);
        
        exit(exit_code);
    }
    /*
     * Scans through the command line arguments and compiles
     * a dictionary and filename list.
     */
    static void scanOptions(String[] args, Options options) {
        for(int i = 0; i < args.length; i++) {
            if(args[i].equals("-D")) {
                options.debugdump = true;
            } else if(args[i].equals("-d")) {
                String[] temp = options.dictionaries;
                options.dictionaries = new String[options.dictionaries.length + 1];
                
                for(int j = 0; j < temp.length; j++)
                    options.dictionaries[j] = temp[j];
                options.dictionaries[options.dictionaries.length - 1] = args[++i];
            } else if(args[i].equals("-n")) {
                options.nodefaultdict = true;
            } else {
                String[] temp = options.filenames;
                options.filenames = new String[options.filenames.length + 1];
                for(int j = 0; j < temp.length; j++)
                    options.filenames[j] = temp[j];
                options.filenames[options.filenames.length - 1] = args[i];
            }
        }
        if(options.filenames == null || options.filenames.length == 0) {
        	options.filenames = new String[1];
        	options.filenames[0] = "-";
        }
    }
    /*
     * Creates the hashset from the specified dictionaries, as well as
     *  /usr/dict/words as well, if specified.
     */
    static void makeHash(hashset<String> hash, Options options) {
        for(int i = 0; i < options.dictionaries.length; i++) {
            try {
            	BufferedReader reader = new BufferedReader(new FileReader(options.dictionaries[i]));
            	for(String entry = reader.readLine(); entry != null; entry = reader.readLine())
            		hash.add(entry.toLowerCase());
            } catch(IOException e) {
            	printError(e.getMessage());
            }
        }
        if(!options.nodefaultdict) {
        	try {
        		BufferedReader reader = new BufferedReader(new FileReader("/usr/dict/words"));
        		for(String entry = reader.readLine(); entry != null; entry = reader.readLine())
        			hash.add(entry.toLowerCase());
        	} catch(IOException e) {
        		printError(e.getMessage());
        	}
        }
    }
    /*
     * Processes each input file in turn, reading "-" as stdin.
     * Prints misspellings to stderr and sets exit code to 1 if
     * misspelled words are encountered.
     */
    static void readFiles(hashset<String> hash, Options options) {
    	for(int i = 0; i < options.filenames.length; i++) {
    		try {
    			BufferedReader reader;
    			if(options.filenames[i].equals("-"))
    				reader = new BufferedReader(new InputStreamReader(in));
    			else 
    				reader = new BufferedReader(new FileReader(options.filenames[i]));
    			int lineNum = 1;
    			for(String line = reader.readLine(); line != null; line = reader.readLine()) {
    				String[] words = extractwords(line);
    				for(int j = 0; j < words.length; j++) {
    					if(!hash.contains(words[j].toLowerCase()))
    						printMisspelling(options.filenames[i], lineNum, words[j]);
    				}
    				lineNum++;
    			}
    		} catch(IOException e) {
    			printError(e.toString());
    		}
    	}
    }
    /*
     * prints simple error message and sets exit code to 2
     */
    static void printError(String message) {
        err.printf("%s", message);
        exit_code = EXIT_FAILURE;
    }
    /*
     * prints misspelled word message and sets exit code to 1, if not already 2
     */
    static void printMisspelling(String filename, int line, String word) {
        out.printf("%s: %d: %s%n", filename, line, word);
        if(exit_code == EXIT_SUCCESS)
        	exit_code = EXIT_MISSPELLING;
    }
    
    static boolean iswordchar( char achar ){
        return Character.isLetterOrDigit( achar ) || achar == '_';
     };

     static boolean iswordhyph( char achar ){
        return ".-&'".indexOf( achar ) >= 0;
     };

     //
     // extractwords - extract words from a line and return an array
     // input        - line containing words
     // returns      - array of words extracted from the line
     //
     static String[] extractwords( String line ){
        linkedlist wordlist = new linkedlist();
        OUTER_SCAN_LOOP:
        for( int begin = 0;; ){

           // find the beginning of the word
           for(;; ++begin ){
              if( begin >= line.length() ) break OUTER_SCAN_LOOP;
              if( iswordchar( line.charAt( begin ))) break;
           };
           boolean haveword = iswordchar( line.charAt( begin ));
           int end = begin + 1;

           // find the end of that word
           for(; end < line.length(); ++end ){
              char endchar = line.charAt( end );
              if( iswordchar( endchar )){
                 haveword = haveword || iswordchar( endchar );
              }else{
                 if( ! iswordhyph( endchar )) break;
                 if( ! iswordchar( line.charAt( end - 1 ))) break;
              };
           };

           // if it really was a word, accumulate in list
           if( haveword ){
              if( ! iswordchar( line.charAt( end - 1 ))) --end;
              wordlist.add( line.substring( begin, end ));
           };
           begin = end;
        };

        // return the words actually found
        return wordlist.toArray( new String[0] );
     };
     /*
      * Simple String linked list implementation for extractwords()
      */
     static class linkedlist {
         private static class node {
             String value;
             node link;
         }
         node first;
         
         public void add(String any) {
             node newNode = new node();
             newNode.value = any;
             newNode.link = first;
             first = newNode;
         }
         public String[] toArray(String[] array) {            
             for(node curr = first; curr != null; curr = curr.link) {
                 String[] temp = array;
                 array = new String[temp.length+1];
                 for(int j = 0; j < temp.length; j++)
                     array[j] = temp[j];
                 array[array.length - 1] = curr.value;
             }
             return array;
         }
     }
    /*
     * Convenience class to hold the options
     */
    static class Options {
        boolean debugdump;
        boolean nodefaultdict;
        String[] dictionaries;
        String[] filenames;
        Options() {
        	debugdump = false;
        	nodefaultdict = false;
        	dictionaries = new String[0];
        	filenames = new String[0];
        }
    } 
}