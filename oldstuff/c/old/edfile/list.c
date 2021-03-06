/* $Id: list.c,v 351.6 2005-02-15 16:01:42-08 - - $ */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

static cstring list_tag = "struct list";
static cstring listnode_tag = "struct listnode";

typedef struct listnode *listnode_ref;

struct list{
   /*
   * INVARIANT:  Both head and last are NULL or neither are NULL.
   * If neither are null, then following listnode next links from
   * head will get to last, and prev links from last gets to head.
   */
   cstring tag;
   listnode_ref head;
   listnode_ref curr;
   listnode_ref last;
};

struct listnode{
   cstring tag;
   list_item item;
   listnode_ref prev;
   listnode_ref next;
};

void debugdump_list( list_ref list ){
   listnode_ref itor = NULL;
   assert( is_list( list ));
   eprintf( "\n[%p]->struct list{ tag=[%p]->[%s];"
            " head=[%p]; curr=[%p]; last=[%p]; }\n",
            list, list->tag, list->tag,
            list->head, list->curr, list->last );
   for( itor = list->head; itor != NULL; itor = itor->next ){
      list_item item = "";
	  if(itor!=list->head)
		item=itor->item;
	  eprintf( "[%p]->struct listnode{ tag=[%p]->[%s];"
               " item=[%p]=[%s]; prev=[%p]; next=[%p]; }\n",
               itor, itor->tag, itor->tag, item, item,
               itor->prev, itor->next );
   };
}

list_ref new_list( void ){
   /*
   * Creates a new struct list.
   */
   list_ref list = malloc( sizeof (struct list) );
   assert( list != NULL );
   list->tag = list_tag;
   list->head = malloc(sizeof(struct listnode));
   list->curr = list->head;
   list->last = list->head;
   return list;
}

void free_list( list_ref list ){
   listnode_ref itor = NULL;
   listnode_ref next = NULL;
   assert( is_list( list ));
   for(itor = list->head; itor!=NULL; itor=next) {
	   next = itor->next;
	   if(itor!=list->head)
		 free(itor->item);
	   free(itor);
   }
   list->head = NULL;
   list->curr = NULL;
   list->last = NULL;	   
   assert( empty_list( list ));
   free(list);
}

bool setmove_list( list_ref list, list_move move ){
   assert( is_list( list ));
   if(list->curr == NULL)
		return FALSE;
   switch( move ){
      case MOVE_HEAD:
		   list->curr = list->head;
		   return TRUE;
           break;
      case MOVE_PREV:
		   if(list->curr == list->head)
				return FALSE;
		   if(list->curr->prev!=NULL) {
				list->curr = list->curr->prev;
				return list->curr!=list->head?TRUE:FALSE;
		   }
		   break;
      case MOVE_NEXT:
		   if(list->curr->next!=NULL) {
				list->curr = list->curr->next;
				return TRUE;
		   }	
		   break;
      case MOVE_LAST:
		   list->curr = list->last;
           return TRUE;
		   break;
      default: assert( FALSE );
   };
   return FALSE;
}

list_item viewcurr_list( list_ref list ){
   assert( is_list( list ));
   return list->curr!=list->head?list->curr->item:NULL;
}

void insert_list( list_ref list, list_item item ){
   listnode_ref newNode = malloc(sizeof(struct listnode));
   assert( is_list( list ));
   assert(newNode!=NULL);
   if(list->curr==list->head && list->curr == list->last) {
		newNode->next=NULL;
		newNode->prev=list->head;
		list->last=newNode;
		list->head->next=newNode;
   } else {
	if(list->curr==list->last)
		list->last=newNode;
	newNode->next=list->curr->next;
	newNode->prev=list->curr;
	list->curr->next=newNode;
   }
   newNode->item=(list_item)strdup(item);
   list->curr=newNode;
}

void delete_list( list_ref list ){
	listnode_ref curr = list->curr;
	assert( is_list( list ));
	assert( ! empty_list( list ));
	if(list->curr==list->head) return;
	list->curr->prev->next=list->curr->next;
	if(list->curr!=list->last) {
		list->curr->next->prev=list->curr->prev;
		list->curr=list->curr->next;
	} else {
		list->last=list->last->prev;
		list->curr=list->last;
	}
	free(curr->item);
	free(curr);
}

bool empty_list( list_ref list ){
   assert( is_list( list ));
   return list->head == NULL;
}

bool is_list( list_ref list ){
   return list != NULL && list->tag == list_tag;
}
