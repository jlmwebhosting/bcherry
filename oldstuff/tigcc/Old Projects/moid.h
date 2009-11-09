#ifndef _EXPERIME_H
#define _EXPERIME_H

// C Header File
// Created 22/Oct/03; 21:29:06

/* Constants */
enum MapDimensions {MAP_ROWS = 12, MAP_COLUMNS = 20, LEVEL_NUM = 5};
enum BlockConstants {BLK_HT = 8, BLK_WIDTH = 8};
enum MetConstants {MET_HT = 16, MET_WIDTH = 16};
enum FrtConstants {FRT_HT = 16, FRT_WIDTH = 16};

enum ArrowKeys {UP,DOWN,LEFT,RIGHT};
enum KeyMatrix {TI89_ESCROW = ~0x0040, TI89_ESCKEY = 0x0001, ARROW_ROW = ~0x0001};

/* Structure Def's */

typedef struct {
	unsigned short int x : 8, y : 8;
} POSITION;

/* Sprite Def's */

static unsigned long int title[] = {0xFFFFF,0x80001,0xB65D9,0xAAA95,
																		0xA25D9,0x80001,0x80001,0x80001,
																		0x80001,0x80001,0x80001,0xFFFFF};

static unsigned long int map[] = {0xFFFFF,0x80001,0x80001,0x80401,
																	 0x80401,0x80401,0x87FC1,0x80401,
																	 0x80401,0x80001,0x80001,0xFFFFF};
static unsigned long int map1[] = {0xFFFFF,0x80001,0x80001,0x80401,
																	 0x80401,0x80401,0x87FC1,0x80401,
																	 0x80401,0x80001,0x80001,0xFFFFF};
static unsigned long int map2[] = {0xFFFFF,0x80001,0x80001,0x80001,
																	 0x9FFF9,0x80901,0x80901,0x9FFF9,
																	 0x80001,0x80001,0x80001,0xFFFFF};
static unsigned long int map3[] = {0xFFFFF,0x80201,0x80203,0xF0205,
																	 0x88009,0x84011,0x82021,0x81001,
																	 0x80801,0x80001,0x80001,0xFFFFF};																	 
static unsigned long int map4[] = {0xFFFFF,0x84001,0x88001,0x90101,
																	 0x88101,0x84101,0x82201,0x81401,
																	 0x80801,0xF0001,0x80001,0xFFFFF};
static unsigned long int map5[] = {0xFFFFF,0x8A001,0x84019,0x80111,
																	 0x80C11,0x88001,0x80011,0x81401,
																	 0x80A01,0xF0001,0xF0001,0xFFFFF};																																
static unsigned int metLight[] = {0x07E0,0x17E8,0x300C,0x700E,0x4002,0xC003,0xC003,0x8001,
																	0x8001,0x4812,0x566A,0x0BD0,0x1248,0x1248,0x1008,0x0000};																
static unsigned int metMid[]   = {0x0000,0x0810,0x0810,0x0990,0x25A4,0x399C,0x300C,0x6816,
																  0x44A2,0x9429,0x2994,0x6426,0x2424,0x2424,0x0810,0x0810};
static unsigned int metDark[]  = {0x0000,0x0000,0x07E0,0x0660,0x1A58,0x0660,0x0FF0,0x17E8,
																  0x3B5C,0x23C4,0x0000,0x1008,0x0990,0x0C30,0x0000,0x0420};
																
static unsigned char lightBlk[] = {0x00,0x18,0x00,0x42,0x42,0x00,0x18,0x00};
static unsigned char midBlk[]   = {0x00,0x24,0x5A,0x24,0x24,0x5A,0x24,0x00};
static unsigned char darkBlk[]  = {0xFF,0xC3,0xA5,0x99,0x99,0xA5,0xC3,0xFF};

static unsigned int frtLight[] = {0x0620,0x0688,0x0E84,0x1F82,0x9FC1,0x9FEB,0x0FEA,0x07EA,
																	0x074A,0x81A6,0x8041,0x8000,0x0002,0x4004,0x2008,0x0C30};
static unsigned int frtMid[]   = {0x0180,0x1850,0x3068,0x606C,0x203E,0x2010,0x9011,0xF811,
																	0xF8B1,0x1E59,0x1FA6,0x404E,0x411C,0x3218,0x1010,0x0240};
static unsigned int frtDark[]  = {0x0040,0x0020,0x0010,0x0010,0x4000,0x4000,0x6000,0x0000,
																	0x0000,0x6000,0x6018,0x3FB0,0x3EE0,0x0DE0,0x0FE0,0x0180};

/* Function Prototypes */

inline void drawBlock(POSITION);
inline void eraseMet(POSITION);
inline void moveMet(POSITION, POSITION);
inline void drawMet(POSITION);

inline void drawFruit(POSITION);
inline void eraseFruit(POSITION);
inline void moveFruit(POSITION, POSITION);

void move(POSITION *, short int, POSITION *, int);

void getKeyMasks(short int *);
void delay(void);
short int quit(void);

short int isWall(POSITION, int);
void drawMap(int);

void _main(void);

#endif