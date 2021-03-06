// C Source File
// Created 02/Nov/03; 16:09:57

#define USE_TI89              // Compile for TI-89
#define USE_TI92PLUS          // Compile for TI-92 Plus
#define USE_V200              // Compile for V200

#define OPTIMIZE_ROM_CALLS    // Use ROM Call Optimization

#define SAVE_SCREEN           // Save/Restore LCD Contents

#include <tigcclib.h>         // Include All Header Files
#include "extgraph.h"					// Include the extgraph library
#include "JudeCN.h"

// Main Function
void _main(void)
{
	unsigned short samus_dark[]  = {0x0640,0x0FE0,0x18A0,0x0460,0x0400,0x0400,0x0E10,0x12E0,0x1820,0x0932,0x013C,0x03E2,0x0270,0x0740,0x0740,0x0260,0x0260,0x0070,0x06F0,0x00A0,0x0000,0x0000,0x0000,0x0000,0x3040,0x0000,0x0000,0x0000,0x0000,
	0x07C0,0x0FE0,0x1FC0,0x0B80,0x0BC0,0x0BC0,0x0FE0,0x1DF0,0x1FF8,0x0EFE,0x06F2,0x07FE,0x07F0,0x00F0,0x00F0,0x05F0,0x05F8,0x07F0,0x07F8,0x0FF0,0x0F70,0x1E70,0x1CE0,0x39C0,0x78E0,0x7860,0xE1E0,0x78F0,0x7878};
	unsigned int samus_l[] = {0x0400,0x0BC0,0x07C0,0x0CA0,0x0CA0,0x0B40,0x03C0,0x0720,0x04BD,0x05BF,0x03CC,0x04FF,0x00D0,0x0240,0x0040,0x0148,0x04D8,0x08D0,0x0AA0,0x1800,0x2400,0x1940,0x9160,0xA800,0x08B0,0x3CF8};
	unsigned int samus_d[] = {0x06C0,0x0FE0,0x0CC0,0x0860,0x0860,0x0CE0,0x0CF0,0x0EF8,0x0677,0x0654,0x04FF,0x01FF,0x0460,0x04F0,0x02F8,0x02F8,0x0770,0x0F68,0x01D0,0x16E0,0x3CC0,0x79E0,0xE8A0,0xD9E0,0x34C8,0x3CF8};
	GraySpriteInit(3840);
	ClrScr();
	Sprite16(50,10,26,samus_l,GrayGetPlane(LIGHT_PLANE),SPRT_XOR);
	Sprite16(50,10,26,samus_d,GrayGetPlane(DARK_PLANE),SPRT_XOR);
	m_Sprite16(10,10,29,samus_dark,GrayGetPlane(LIGHT_PLANE),GrayGetPlane(DARK_PLANE),SPRT_XOR);
	while (ngetchx() != KEY_ESC);
	GraySpriteDeInit();
}
