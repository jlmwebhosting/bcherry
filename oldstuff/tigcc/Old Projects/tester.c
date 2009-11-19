// C Source File
// Created 07/Dec/03; 18:57:46

#define USE_TI89              // Compile for TI-89

#define OPTIMIZE_ROM_CALLS    // Use ROM Call Optimization

#define SAVE_SCREEN           // Save/Restore LCD Contents

#include <tigcclib.h>         // Include All Header Files
#include "JudeCN.h"
enum states {LEFT_REG,RIGHT_REG,LEFT_JUMP,RIGHT_JUMP,LEFT_FALL,RIGHT_FALL,LEFT_FLIP_1,LEFT_FLIP_2,LEFT_FLIP_3,LEFT_FLIP_4,RIGHT_FLIP_1,RIGHT_FLIP_2,RIGHT_FLIP_3,RIGHT_FLIP_4,
						 LEFT_RUN_1,LEFT_RUN_2,LEFT_RUN_3,LEFT_RUN_4,RIGHT_RUN_1,RIGHT_RUN_2,RIGHT_RUN_3,RIGHT_RUN_4,LEFT_KNEEL,RIGHT_KNEEL,LEFT_HURT,RIGHT_HURT,MORPH_1,MORPH_2,MORPH_3};
typedef struct {
	char x_pos;
	char y_pos;
	char width;
	char height;	
	char face;
	char ground;
	char x_change;
	char falling;
	char state;
	char flip;
	char morph;
	char jumping;
	char energy_tanks_max;
	unsigned int energy_current;
	unsigned char missiles_max;
	unsigned char missiles_ammo;
	char charge_beam_got;
	char charger;
	// this is the structure that defines samus aran's
	// attributes.  Again, this is hypothetical, and may
	// change.
} SAMUS;
SAMUS samus = {0,0,16,18,0,0,0,1,RIGHT_FALL,0,0,0,0,99,0,0,0,0};

inline void drawSamus(void) {		
	if (samus.state == RIGHT_REG) {
		unsigned short samus_sprt[] = {0x0000,0x0180,0x0780,0x0440,0x06C0,0x0640,0x0740,0x02EC,0x01FC,0x02C0,0x0060,0x0040,0x02D0,0x0280,0x0400,0x0D40,0x0140,0x1140,
									 								 0x0000,0x0180,0x0780,0x06C0,0x0440,0x07C0,0x06E0,0x024C,0x02FC,0x0040,0x02C0,0x00E0,0x0370,0x05E0,0x02C0,0x0DC0,0x1C80,0x1D80};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == LEFT_REG) {			
		unsigned short samus_sprt[] = {0x0000,0x0180,0x01E0,0x0220,0x0360,0x0260,0x02E0,0x3740,0x3F80,0x0340,0x0600,0x0200,0x0B40,0x0140,0x0020,0x02B0,0x0280,0x0288,
									 								 0x0000,0x0180,0x01E0,0x0360,0x0220,0x03E0,0x0760,0x3240,0x3F40,0x0200,0x0340,0x0700,0x0EC0,0x07A0,0x0340,0x03B0,0x0138,0x01B8};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == RIGHT_JUMP) {
		unsigned short samus_sprt[] = {0x0180,0x01C0,0x06C0,0x0240,0x0BB0,0x07E8,0x07C0,0x0340,0x0040,0x02D0,0x01A0,0x01C0,0x02C0,0x00A0,0x0400,0x0300,0x0600,0x0200,
									 								 0x01C0,0x02C0,0x0620,0x03E0,0x07F0,0x0FD8,0x0760,0x03B0,0x02B0,0x03C0,0x01E0,0x01C0,0x0380,0x0380,0x0600,0x0600,0x0400,0x0200};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == LEFT_JUMP) {
		unsigned short samus_sprt[] = {0x0180,0x0380,0x0360,0x0240,0x0DD0,0x17E0,0x03E0,0x02C0,0x0200,0x0B40,0x0580,0x0380,0x0340,0x0500,0x0020,0x00C0,0x0060,0x0040,
									 								 0x0380,0x0340,0x0460,0x07C0,0x0FE0,0x1BF0,0x06E0,0x0DC0,0x0D40,0x03C0,0x0780,0x0380,0x01C0,0x01C0,0x0060,0x0060,0x0020,0x0040};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == RIGHT_FALL) { 
		unsigned short samus_sprt[] = {0x0000,0x0180,0x03C0,0x07C0,0x05C0,0x07C0,0x07C0,0x07C0,0x03F0,0x0308,0x01F8,0x01E0,0x03E0,0x0A60,0x00A0,0x0060,0x0400,0x0000,
									 								 0x0000,0x01C0,0x03C0,0x0400,0x0640,0x07C0,0x00C0,0x04C0,0x0300,0x03F0,0x01C8,0x01D0,0x02A0,0x0EC0,0x0660,0x0440,0x0400,0x0000};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == LEFT_FALL) {
		unsigned short samus_sprt[] = {0x0000,0x0180,0x03C0,0x03E0,0x03A0,0x03E0,0x03E0,0x03E0,0x0FC0,0x10C0,0x1F80,0x0780,0x07C0,0x0650,0x0500,0x0600,0x0020,0x0000,
									 								 0x0000,0x0380,0x03C0,0x0020,0x0260,0x03E0,0x0300,0x0320,0x00C0,0x0FC0,0x1380,0x0B80,0x0540,0x0370,0x0660,0x0220,0x0020,0x0000};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == RIGHT_FLIP_1) {
		unsigned short samus_sprt[] = {0x0000,0x0000,0x0000,0x0000,0x0180,0x0B40,0x0B70,0x0678,0x07B8,0x05A4,0x01F0,0x00C4,0x007C,0x00C8,0x0000,0x0000,0x0000,0x0000,
									 								 0x0000,0x0000,0x0000,0x0000,0x0180,0x0EC0,0x16F0,0x03F8,0x057C,0x051C,0x01E4,0x01B4,0x00BC,0x00F8,0x0000,0x0000,0x0000,0x0000};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == RIGHT_FLIP_2) {
		unsigned short samus_sprt[] = {0x0000,0x0000,0x0000,0x0000,0x0600,0x0800,0x1380,0x05C0,0x11D0,0x1E20,0x0EE0,0x1F18,0x0330,0x00A8,0x0000,0x0000,0x0000,0x0000,
									 								 0x0000,0x0000,0x0000,0x0000,0x0600,0x0B00,0x1E80,0x13C0,0x07F0,0x12C0,0x1FF0,0x17E8,0x0234,0x0168,0x0000,0x0000,0x0000,0x0000};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == RIGHT_FLIP_3) {
		
		unsigned short samus_sprt[] = {0x0000,0x0000,0x0000,0x0000,0x02D0,0x0388,0x07A4,0x0694,0x0270,0x1D70,0x1120,0x0880,0x0600,0x0A00,0x0400,0x0000,0x0000,0x0000,
									 								 0x0000,0x0000,0x0000,0x0000,0x03B0,0x0118,0x0754,0x03FC,0x0F68,0x12F0,0x1E60,0x0F40,0x0E80,0x0E00,0x0400,0x0000,0x0000,0x0000};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == RIGHT_FLIP_4) {
		
		unsigned short samus_sprt[] = {0x0000,0x0000,0x0000,0x0000,0x0000,0x0018,0x01E0,0x0178,0x01DC,0x0FC4,0x1F30,0x15F0,0x0060,0x0960,0x0380,0x0000,0x0000,0x0000,
									 								 0x0000,0x0000,0x0000,0x0000,0x0010,0x0008,0x01D8,0x0038,0x03E4,0x0B3C,0x1F60,0x1E70,0x0FE0,0x0CE0,0x0380,0x0000,0x0000,0x0000};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == LEFT_FLIP_1) {
	
		unsigned short samus_sprt[] = {0x0000,0x0000,0x0000,0x0000,0x0180,0x02D0,0x0ED0,0x1E60,0x1DE0,0x25A0,0x0F80,0x2300,0x3E00,0x1300,0x0000,0x0000,0x0000,0x0000,
									 								 0x0000,0x0000,0x0000,0x0000,0x0180,0x0370,0x0F68,0x1FC0,0x3EA0,0x38A0,0x2780,0x2D80,0x3D00,0x1F00,0x0000,0x0000,0x0000,0x0000};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == LEFT_FLIP_2) {
		
		unsigned short samus_sprt[] = {0x0000,0x0000,0x0000,0x0000,0x0060,0x0010,0x01C8,0x03A0,0x0B88,0x0478,0x0770,0x18F8,0x0CC0,0x1500,0x0000,0x0000,0x0000,0x0000,
									 								 0x0000,0x0000,0x0000,0x0000,0x0060,0x00D0,0x0178,0x03C8,0x0FE0,0x0348,0x0FF8,0x17E8,0x2C40,0x1680,0x0000,0x0000,0x0000,0x0000};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == LEFT_FLIP_3) {
		
		unsigned short samus_sprt[] = {0x0000,0x0000,0x0000,0x0000,0x0B40,0x11C0,0x25E0,0x2960,0x0E40,0x0EB8,0x0488,0x0110,0x0060,0x0050,0x0020,0x0000,0x0000,0x0000,
									 								 0x0000,0x0000,0x0000,0x0000,0x0DC0,0x1880,0x2AE0,0x3FC0,0x16F0,0x0F48,0x0678,0x02F0,0x0170,0x0070,0x0020,0x0000,0x0000,0x0000};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == LEFT_FLIP_4) {
		
		unsigned short samus_sprt[] = {0x0000,0x0000,0x0000,0x0000,0x0000,0x1800,0x0780,0x1E80,0x3B80,0x23F0,0x0CF8,0x0FA8,0x0600,0x0690,0x01C0,0x0000,0x0000,0x0000,
									 								 0x0000,0x0000,0x0000,0x0000,0x0800,0x1000,0x1B80,0x1C00,0x27C0,0x3CD0,0x06F8,0x0E78,0x07F0,0x0730,0x01C0,0x0000,0x0000,0x0000};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == RIGHT_RUN_2) {
		
		unsigned short samus_sprt[] = {0x0000,0x0100,0x0400,0x0E40,0x0700,0x05C0,0x0F7F,0x07BF,0x0180,0x0440,0x0480,0x02C0,0xE440,0xE030,0xE000,0xC038,0x8018,0x0012,
									 								 0x0000,0x0180,0x0780,0x0C40,0x0CC0,0x1F20,0x0F90,0x07FF,0x02C0,0x0480,0x01C0,0x04F0,0xE470,0xBC10,0x8030,0x8028,0x8010,0x000E};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == RIGHT_RUN_3) {
		
		unsigned short samus_sprt[] = {0x0000,0x0180,0x0240,0x0040,0x0140,0x06C0,0x07CF,0x03DF,0x12C0,0x18C0,0x56E0,0x56F0,0x0200,0x0420,0x0010,0x0020,0x001C,0x0004,
									 								 0x0000,0x01C0,0x03C0,0x0280,0x0680,0x0760,0x0793,0x02EF,0x1240,0x0A40,0x7DC0,0x5DD0,0x0630,0x0610,0x0020,0x0030,0x0014,0x001C};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == RIGHT_RUN_4) {
		unsigned short samus_sprt[] = {0x0600,0x0800,0x0100,0x1100,0x1D00,0x1C0C,0x0E7C,0x0A00,0x0300,0x0A00,0x1D00,0x1480,0x2C80,0x2200,0x0800,0x0C00,0x0000,0x0600,
									 								 0x0600,0x0F00,0x0D00,0x1B00,0x1E80,0x0E7C,0x0BBC,0x0E00,0x0900,0x0900,0x0E80,0x1B80,0x2700,0x2600,0x0C00,0x0E00,0x0C00,0x0600};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == RIGHT_RUN_1) {
		unsigned short samus_sprt[] = {0x0100,0x05C0,0x0280,0x0040,0x05E0,0x0703,0x07BF,0x0400,0x00C0,0x0400,0x06F0,0x04A0,0x00C0,0x20C0,0x30C0,0x6060,0x3000,0x1800,
									 								 0x0180,0x07C0,0x0500,0x04C0,0x06B0,0x073F,0x07DF,0x0700,0x0400,0x0720,0x0ED0,0x1CA0,0x18C0,0x3140,0x6080,0x4060,0x2000,0x1800};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == LEFT_RUN_2) {
	
		unsigned short samus_sprt[] = {0x0000,0x0080,0x0020,0x0270,0x00E0,0x03A0,0xFEF0,0xFDE0,0x0180,0x0220,0x0120,0x0340,0x0227,0x0C07,0x0007,0x1C03,0x1801,0x4800,
									 								 0x0000,0x0180,0x01E0,0x0230,0x0330,0x04F8,0x09F0,0xFFE0,0x0340,0x0120,0x0380,0x0F20,0x0E27,0x083D,0x0C01,0x1401,0x0801,0x7000};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == LEFT_RUN_3) {
	
		unsigned short samus_sprt[] = {0x0000,0x0180,0x0240,0x0200,0x0280,0x0360,0xF3E0,0xFBC0,0x0348,0x0318,0x076A,0x0F6A,0x0040,0x0420,0x0800,0x0400,0x3800,0x2000,
									 								 0x0000,0x0380,0x03C0,0x0140,0x0160,0x06E0,0xC9E0,0xF740,0x0248,0x0250,0x03BE,0x0BBA,0x0C60,0x0860,0x0400,0x0C00,0x2800,0x3800};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == LEFT_RUN_4) {
	unsigned short samus_sprt[] = {0x0060,0x0010,0x0080,0x0088,0x00B8,0x3038,0x3E70,0x0050,0x00C0,0x0050,0x00B8,0x0128,0x0134,0x0044,0x0010,0x0030,0x0000,0x0060,
									 								 0x0060,0x00F0,0x00B0,0x00D8,0x0178,0x3E70,0x3DD0,0x0070,0x0090,0x0090,0x0170,0x01D8,0x00E4,0x0064,0x0030,0x0070,0x0030,0x0060};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == LEFT_RUN_1) {
		unsigned short samus_sprt[] = {0x0080,0x03A0,0x0140,0x0200,0x07A0,0xC0E0,0xFDE0,0x0020,0x0300,0x0020,0x0F60,0x0520,0x0300,0x0304,0x030C,0x0606,0x000C,0x0018,
									 								 0x0180,0x03E0,0x00A0,0x0320,0x0D60,0xFCE0,0xFBE0,0x00E0,0x0020,0x04E0,0x0B70,0x0538,0x0318,0x028C,0x0106,0x0602,0x0004,0x0018};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == RIGHT_KNEEL) {
		unsigned short samus_sprt[] = {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0700,0x0180,0x0980,0x0880,0x0CC0,0x07D0,0x0798,0x04F0,0x0120,0x0C40,0x0BC0,0x0F80,
									 								 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0780,0x0780,0x0A80,0x0F80,0x07C0,0x04F0,0x07F8,0x01F0,0x04E0,0x0EC0,0x0F40,0x0FE0};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == LEFT_KNEEL) {
		unsigned short samus_sprt[] = {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x00E0,0x0180,0x0190,0x0110,0x0330,0x0BE0,0x19E0,0x0F20,0x0480,0x0230,0x03D0,0x01F0,
									 								 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x01E0,0x01E0,0x0150,0x01F0,0x03E0,0x0F20,0x1FE0,0x0F80,0x0720,0x0370,0x02F0,0x07F0};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == RIGHT_HURT) {
		unsigned short samus_sprt[] = {0x0000,0x00E0,0x0208,0x07E8,0x0DE8,0x02B0,0x0750,0x0370,0x09D0,0x0FB0,0x07E0,0x0140,0x0290,0x0598,0x0538,0x0810,0x0000,0x0000,
									 								 0x0000,0x0080,0x01D0,0x0010,0x0390,0x0540,0x0020,0x0090,0x0620,0x0200,0x0000,0x0480,0x0120,0x0260,0x0200,0x0020,0x0020,0x0000};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == LEFT_HURT) {
		unsigned short samus_sprt[] = {0x0000,0x0700,0x1040,0x17E0,0x17B0,0x0D40,0x0AE0,0x0EC0,0x0B90,0x0DF0,0x07E0,0x0280,0x0940,0x19A0,0x1CA0,0x0810,0x0000,0x0000,
									 								 0x0000,0x0100,0x0B80,0x0800,0x09C0,0x02A0,0x0400,0x0900,0x0460,0x0040,0x0000,0x0120,0x0480,0x0640,0x0040,0x0400,0x0400,0x0000};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == MORPH_1) {
		unsigned short samus_sprt[] = {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0080,0x0240,0x01E0,0x0200,0x0220,0x0140,
									 								 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x03C0,0x05A0,0x0610,0x05D0,0x0420,0x0220};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == MORPH_2) {
		unsigned short samus_sprt[] = {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0580,0x02C0,0x0360,0x0020,0x0140,
									 								 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x03C0,0x0660,0x0530,0x0490,0x0480,0x02A0};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	} else if (samus.state == MORPH_3) {
		unsigned short samus_sprt[] = {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x01C0,0x05C0,0x0640,0x01C0,0x0180,
									 								 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x03C0,0x0420,0x0030,0x05B0,0x0420,0x0260};
		m_Sprite16(samus.x_pos,samus.y_pos,18,samus_sprt,GetPlane(LIGHT_PLANE),GetPlane(DARK_PLANE),SPRT_XOR);
	}	
}

// Main Function
void _main(void)
{
	samus = (SAMUS){0,0,16,18,0,0,0,1,-1,0,0,0,0,99,0,0,0,0};
	GraySpriteInit(3840);
	clrscr();
	int x,y;
	for(y=0;y<=72;y+=18){
		for(x=0;x<=102;x+=16){
			samus.x_pos=x;		
			samus.state++;
			samus.y_pos=y;			
			drawSamus();
			//ngetchx();
		}
	}
	ngetchx();
	GraySpriteDeInit();
}
