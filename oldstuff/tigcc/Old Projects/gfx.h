// C Header File
// Created 21/Oct/03; 22:07:40
/*
    Nibbles 68k v. 4.1 -- Nibbles Snake Game Clone
    Copyright (C) 2000-2002 John David Ratliff
    Based on Stilgar's Nibbles for Fargo

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; either version 2
    of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

// C Header File
// Created 7/1/2001; 6:31:09 PM

#ifndef _GFX_H
#define _GFX_H

// game sprites
static unsigned char block[] = {0xFF,0xFF,0xFF,0xFF,0xFF,0x00};
static unsigned char empty[] = {0x00,0x00,0x00,0x00,0x00,0x00};
static unsigned char apple[] = {0x18,0x3C,0x7E,0x7E,0x3C,0x00};

// game info sprites
static unsigned char lifeToken[] = {0xF0, 0xF0};
static unsigned char appleToken[] = {0xA0, 0x50};

// level data
unsigned long int levels[10][19] = {
	{0xFFFFF,0x80001,0x80001,0x80001,0x80001,0x80001,0x80001,0x80001,
	 0x80001,0x80001,0x80001,0x80001,0x80001,0x80001,0x80001,0x80001,
	 0x80001,0x80001,0xFFFFF}, // level 1
	{0xFFFFF,0x80001,0x80001,0x80001,0x80001,0x80001,0x80001,0x80001,
	 0x80001,0x87FE1,0x80001,0x80001,0x80001,0x80001,0x80001,0x80001,
	 0x80001,0x80001,0xFFFFF}, // level 2
	{0xFFFFF,0x80001,0x80001,0x80001,0x80001,0x87FE1,0x80001,0x80001,
	 0x80001,0x87FE1,0x80001,0x80001,0x80001,0x87FE1,0x80001,0x80001,
	 0x80001,0x80001,0xFFFFF}, // level 3
	{0xFFFFF,0x80001,0x80001,0x80001,0x80001,0x84001,0x82001,0x81001,
	 0x80801,0x80401,0x80201,0x80101,0x80081,0x80041,0x80021,0x80001,
	 0x80001,0x80001,0xFFFFF}, // level 4
	{0xFFFFF,0x80001,0x80001,0x80001,0x80401,0x80401,0x80401,0x80401,
	 0x80401,0x87FC1,0x80401,0x80401,0x80401,0x80401,0x80401,0x80001,
	 0x80001,0x80001,0xFFFFF}, // level 5
	{0xFFFFF,0x80101,0x80101,0x80101,0x80101,0x80001,0x80001,0x80001,
	 0xF8001,0x80001,0x80001,0x8001F,0x80001,0x80001,0x80801,0x80801,
	 0x80801,0x80801,0xFFFFF}, // level 6
	{0xFFFFF,0x80001,0x80001,0x80001,0x81F81,0x80001,0x80001,0x90009,
	 0x90009,0x90009,0x90009,0x90009,0x80001,0x80001,0x81F81,0x80001,
	 0x80001,0x80001,0xFFFFF}, // level 7
	{0xFFFFF,0x80001,0x80001,0x80001,0x80001,0xFFF01,0x80001,0x80001,
	 0x80001,0x80FFF,0x80001,0x80001,0x80001,0xFFF01,0x80001,0x80001,
	 0x80001,0x80001,0xFFFFF}, // level 8
	{0xFFFFF,0x80001,0x80F81,0x80001,0x84011,0x84011,0x84211,0x84211,
	 0x80201,0x80001,0x84011,0x84011,0x84011,0x84211,0x80201,0x84211,
	 0x84011,0x80001,0xFFFFF}, // level 9
	{0xFFFFF,0x80001,0x80001,0x80001,0x9FC11,0x90411,0x90411,0x90411,
	 0x90411,0x90631,0x80001,0x90631,0x90411,0x90411,0x9FC11,0x80001,
	 0x80001,0x80001,0xFFFFF}, // level 10 (last level)
};

// game logo
static unsigned long int logo[100] = {
	0x00000000,0x00000000,0x00000000,0x000e000f,0x01ff3f9f,
	0x007f3f1f,0x007f9f0f,0x007f9f3f,0x007fdf1f,0x007fdf0f,
	0x007ffe0f,0x00fdfe0f,0x00fcfe1f,0x00fefe1f,0x00fe7e1f,
	0x00fe3e1f,0x01ff1f1f,0x001f883f,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x87c03e00,0xcf807c01,
	0xc7803c03,0x87803c01,0xe7b83dc1,0x877e3bf1,0x87fe3ff1,
	0x87ff3ff9,0x87bf3df9,0x87bf3df9,0x87ff3ff9,0x87fe3ff1,
	0x87fc3fe1,0xc7f83fc1,0xef807c03,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x18000000,0xf8000000,
	0xf8000000,0xf8000000,0xf83f03f2,0xf87f87fc,0xf8efc7fc,
	0xf9cfef88,0xf1ffc7fc,0xf1ffc3fe,0xf1ffa07f,0xf1fe667f,
	0xf0ffefff,0xf07feffe,0xf81e28f8,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x0000f080,0x0003ff01,
	0x0007fe03,0x000f8603,0x001f0001,0x001f7e01,0x003fff87,
	0x003fffcf,0x003f9fcf,0x003f9fdf,0x001fffdf,0x001fff8f,
	0x000fff0f,0x0007fe07,0x0000f000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0xfc0ff000,0xff07e000,
	0x9f07c000,0xff07c800,0xff07df80,0xff07de00,0xffc7fc00,
	0xffe7f800,0xfce7fc00,0xfce7fe00,0xffe7ff00,0xffe7df80,
	0xffc7cf80,0xff87e780,0xfc0fee00,0x00000000,0x00000000
};

// menu selector block
static unsigned long int selector[40] = {
	0x03ffffff,0x03ffffff,0x03ffffff,0x03ffffff,0x03ffffff,0x03ffffff,0x03ffffff,0x03ffffff,
	0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,
	0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,
	0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,
	0xffffffc0,0xffffffc0,0xffffffc0,0xffffffc0,0xffffffc0,0xffffffc0,0xffffffc0,0xffffffc0
};

// crash logo
static unsigned long int crash[60] = {
	0x00000000,0x00000000,0x01ff6000,0x01ff6000,0x07807800,
	0x07807800,0x00000000,0x078000f1,0x078000f1,0x078000fe,
	0x078000fe,0x00000000,0x078000f0,0x078000f0,0x078078f0,
	0x078078f0,0x01ff60f0,0x01ff60f0,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0xe0ffb03f,0xe0ffb03f,0x00003cf0,
	0x00003cf0,0x00000000,0x00ffbc3f,0x00c03c00,0x03c03c00,
	0x03c03c00,0x00ffbc3f,0x00ffbc3f,0x00000000,0x00000000,
	0x00000000,0x00000000,0x001e0000,0x001e0000,0x001e0000,
	0x001e0000,0x00000000,0xec1ffd80,0xec1ffd80,0x001e01e0,
	0x001e01e0,0x00000000,0xec1e01e0,0x0c1e01e0,0x0f1e01e0,
	0x0f1e01e0,0xec1e01e0,0xec1e01e0,0x00000000,0x00000000
};

static unsigned short int endings[4][225] = {
	{0x0000,0x0000,0x069c,0x0fff,0x1fff,
	 0x3fff,0x3fbf,0x7f97,0x7e03,0x7e03,
	 0x7c01,0xf801,0xf801,0xfc05,0xfe05,
	 0xfe3f,0x7f1f,0x7f9f,0x3fff,0x1fff,
	 0x1fff,0x0dff,0x0067,0x0002,0x0000,
	 0x0000,0x0007,0x002f,0x803e,0xc0be,
	 0xe0fc,0xe07c,0xf07e,0xf87e,0xf8fe,
	 0xf8fe,0xf8fe,0xf07e,0xf87e,0xf87f,
	 0xf0ff,0xf07f,0xe07f,0xc03f,0x803f,
	 0xc01f,0xf017,0x8001,0x0000,0x0000,
	 0x0000,0x0000,0x02d1,0x0fd1,0x0ff1,
	 0x07f1,0x0ff1,0x0fe1,0x07e3,0x07d3,
	 0x0ff3,0x07f3,0x07e1,0x07e1,0x07f2,
	 0x03f3,0x07e1,0x03e1,0x87e1,0xffe3,
	 0xff43,0xfec3,0x6c00,0x0000,0x0000,
	 0x0000,0x1c09,0xfc3f,0xfc3f,0xf87f,
	 0xf879,0xfc01,0xf801,0xf800,0xf800,
	 0xfc00,0xfc00,0xfc00,0xfc00,0xf800,
	 0xf000,0xf800,0xf800,0xf000,0xf800,
	 0xfc00,0xfc00,0x2000,0x0000,0x0000,
	 0x0000,0xc788,0xfff8,0xfff0,0xfff8,
	 0xfff8,0xfe18,0x7e00,0x7f00,0x7f00,
	 0x7f00,0x7e00,0xfe00,0x7e00,0x7e00,
	 0xfe00,0xfe00,0x7e00,0x7e00,0xfc00,
	 0xfe00,0xfe00,0xb600,0x0000,0x0000,
	 0x0000,0x138f,0x7fff,0x7fff,0xffff,
	 0xf3ff,0x03fc,0x02fc,0x00fe,0x00fe,
	 0x00fe,0x00fc,0x01fc,0x00fc,0x00fc,
	 0x01fc,0x01fc,0x00fc,0x00fc,0x01f8,
	 0x01fc,0x01fc,0x016c,0x0000,0x0000,
	 0x0000,0x1000,0xf0bf,0xe07f,0xf07f,
	 0xf07f,0x307e,0x00ff,0x00fe,0x00fc,
	 0x00fe,0x007f,0x007f,0x01ff,0x00fe,
	 0x00fe,0x00fe,0x00fc,0x007f,0x00ff,
	 0x00ff,0x00ff,0x000f,0x0000,0x0000,
	 0x0000,0x0000,0xff08,0xfe0f,0xfe0f,
	 0xfe0f,0x000f,0x000f,0x000f,0x0007,
	 0x0e1f,0xfe0f,0xfe0f,0xfe0f,0x180f,
	 0x000f,0x001f,0x001f,0x3a0f,0xfe0f,
	 0xff0f,0xff1b,0x0e01,0x0000,0x0000,
	 0x0000,0x0600,0xfee0,0xffe0,0xfffc,
	 0xfffc,0xedfe,0xc4fe,0xc0fc,0xf2fc,
	 0xe7f8,0xfffc,0xfff8,0xfff0,0xfff0,
	 0xfdf8,0xc5f8,0xc1fc,0xc1f8,0xc1fc,
	 0xc0fc,0xe0fe,0x60de,0x0000,0x0000},	// quitter
	{0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x1020,0x3fc0,0x7fc0,
	 0x7f80,0x3fc0,0x3fc0,0x3fc0,0x3fc0,
	 0x7fc0,0x3f80,0x3f40,0x3fc0,0x3f80,
	 0x3fc0,0x1f80,0x7f80,0x3fde,0x3fff,
	 0x3fff,0x3fff,0x3fff,0x701c,0x0000,
	 0x0000,0x0000,0x0000,0x000f,0x001f,
	 0x003f,0x003f,0x017f,0x01fc,0x01f8,
	 0x03f8,0x03f4,0x03f8,0x01f8,0x01f8,
	 0x01f8,0x01fc,0x01fc,0xe1ff,0xe0ff,
	 0xc03f,0xc017,0xc003,0x2000,0x0000,
	 0x0000,0x0000,0xe000,0xe400,0xfe00,
	 0xff01,0xff01,0xffc3,0x1fc3,0x0fe3,
	 0x07e3,0x03e1,0x03e0,0x03e1,0x03e0,
	 0x03e0,0x03e0,0x87c0,0xc7c2,0xff03,
	 0xff03,0xfe03,0xfe03,0x3800,0x0000,
	 0x0000,0x0000,0x0030,0x1ff8,0x3fff,
	 0xffff,0xffff,0xff9f,0xfb01,0xf800,
	 0xfc00,0xfec0,0xfffc,0xfffe,0x7fff,
	 0x07ff,0x07ff,0x001f,0xc01f,0xfe1f,
	 0xffff,0xfff9,0xfff8,0x4cfc,0x0000,
	 0x0000,0x0000,0x0002,0x017f,0x81ff,
	 0xc1ff,0x81ff,0x81fc,0x83fc,0x01f8,
	 0x01f0,0x01fc,0x01ff,0x01ff,0xc3ff,
	 0xe3fc,0x83fc,0xc1f8,0xc1f8,0x81fc,
	 0x83ff,0x81ff,0x01ff,0x001c,0x0000,
	 0x0000,0x0000,0x0000,0xfc23,0xfc3f,
	 0xfc3f,0xfc3f,0x003f,0x003f,0x003f,
	 0x001f,0x3c7f,0xfc3f,0xf83f,0xfc3f,
	 0x203f,0x003f,0x007f,0x007f,0x643f,
	 0xfc3f,0xfc3f,0xfc6f,0x3c05,0x0000,
	 0x0000,0x0000,0x1800,0xfb80,0xff80,
	 0xfff0,0xfff0,0xb7f8,0x13f8,0x03f0,
	 0xcbf0,0x9fe0,0xfff0,0xffe0,0xffc0,
	 0xffc0,0xf7e0,0x17e0,0x07f0,0x07e0,
	 0x07f0,0x03f0,0x83f8,0x8378,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000},	// loser
	{0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0001,0x0001,0x0001,
	 0x0001,0x0003,0x0003,0x0003,0x0003,
	 0x0003,0x0003,0x0001,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0ba0,
	 0x7fe3,0xffe3,0xfee3,0xf023,0xe007,
	 0xf007,0xf003,0xf003,0xf005,0xe003,
	 0xf863,0xffc3,0xffc3,0x7fe7,0x2d61,
	 0x0800,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x80c0,
	 0xf0f8,0xe0f8,0xe1f8,0xf0f8,0xe0f8,
	 0xfef8,0xfff8,0xfff8,0xfcf9,0xe0f1,
	 0xe1f8,0xe0f8,0xe0f8,0xe0f8,0xd0a0,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x5cf0,
	 0xffe0,0xffe0,0xf980,0xfc00,0xf800,
	 0xf040,0xffe0,0xffe0,0xfbe0,0xf801,
	 0xf801,0xf801,0xffe3,0xffe3,0xffe3,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x2aa0,
	 0x3fe0,0x3fe0,0x3fe0,0x7ff0,0x7df0,
	 0xf9f0,0xf9f0,0xf8f0,0xfdf8,0xfff8,
	 0xfff8,0xfffc,0xf2fc,0xe07e,0xa068,
	 0x0040,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0010,0x7ffe,
	 0x7ffe,0xfffe,0x47e6,0x07e0,0x03e0,
	 0x03e0,0x03e0,0x03e0,0x03e0,0x07e0,
	 0x03e0,0x03e0,0x03c0,0x03e0,0x0560,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0b9c,
	 0x1ffc,0x1ffc,0x1f20,0x1f00,0x1e00,
	 0x1e08,0x1ffc,0x1ffc,0x3f70,0x3f00,
	 0x3e00,0x1e00,0x3ffc,0x3ffc,0x1ffc,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x4390,
	 0x7ff0,0x7ffc,0x7ffe,0x7cbe,0x7c3e,
	 0x7efc,0x7ffe,0x7ffc,0x7ff8,0x7ffc,
	 0x7c3c,0x7c3c,0x7c3c,0x7c3e,0x1c3f,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000,
	 0x0000,0x0000,0x0000,0x0000,0x0000},	// cheater
	{0x0000,0x0027,0x007f,0x007f,0x007e,
	 0x003f,0x003f,0x001f,0x003f,0x001f,
	 0x001f,0x001f,0x001f,0x000f,0x000f,
	 0x001f,0x000f,0x000f,0x000f,0x000f,
	 0x000f,0x000f,0x000c,0x0000,0x0000,
	 0x0000,0x0080,0x0184,0x0787,0x0f07,
	 0x1f07,0x1f0f,0x1f8f,0x1f8f,0x9f8f,
	 0x9f87,0x9f87,0xfff7,0xffff,0xffff,
	 0xfdff,0xfdff,0xf8ff,0xf1ff,0xf1ff,
	 0xf0ff,0x70f7,0x1071,0x0010,0x0000,
	 0x0000,0x401c,0xd1fc,0xf1fc,0xe1f8,
	 0xe1f8,0xe1fc,0xc1f8,0xc3f8,0xc3f8,
	 0xc3fc,0xc3fc,0xc1fc,0x81fc,0x82f8,
	 0x83f0,0x01f8,0x01f8,0x01f0,0x03f8,
	 0x03fc,0x03fc,0x0020,0x0000,0x0000,
	 0x0000,0x0000,0x7bc3,0x7fc3,0x3fc3,
	 0x3fc3,0x1fe1,0x3ff3,0x3ffb,0x3ffb,
	 0x3ffb,0x1fff,0x1f7f,0x1f3f,0x3f9f,
	 0x3f9f,0x3f8f,0x3f8f,0x7f83,0x3f87,
	 0x3f85,0x3f81,0x1201,0x0000,0x0000,
	 0x0000,0x0000,0xd8f7,0xf8ff,0xf87f,
	 0xf87f,0xf03f,0xf87f,0xf87f,0xf87f,
	 0xf07f,0xf83f,0xf03e,0xf83e,0xf87f,
	 0xf87f,0xf87f,0xf07f,0xf0ff,0xf07f,
	 0xf07f,0xd87f,0x5824,0x0000,0x0000,
	 0x0000,0x0000,0x87b0,0x87f0,0x87f0,
	 0x87f0,0xc3e0,0xe7f0,0xf7f0,0xf7f0,
	 0xf7e0,0xfff0,0xffe0,0x7ff1,0x3ff0,
	 0x3ff0,0x1ff0,0x1fe0,0x07e0,0x0fe0,
	 0x0be0,0x03b0,0x02b0,0x0000,0x0000,
	 0x0000,0x0000,0xbfff,0x7ffe,0x7ffe,
	 0x7ffe,0x7e00,0xff00,0xfe00,0xfc00,
	 0xfe0e,0x7ffe,0x7ffe,0xfffe,0xfe18,
	 0xfe00,0xfe00,0xfc00,0x7f3a,0xfffe,
	 0xffff,0xffff,0x0f0e,0x0000,0x0000,
	 0x0000,0x0006,0x08fe,0x0fff,0x0fff,
	 0x0fff,0x0fed,0x0fc4,0x0fc0,0x07f2,
	 0x1fe7,0x0fff,0x0fff,0x0fff,0x0fff,
	 0x0ffd,0x1fc5,0x1fc1,0x0fc1,0x0fc1,
	 0x0fc0,0x1be0,0x0160,0x0000,0x0000,
	 0x0000,0x0000,0xe000,0xe000,0xfc00,
	 0xfc00,0xfe00,0xfe00,0xfc00,0xfc00,
	 0xf800,0xfc00,0xf800,0xf000,0xf000,
	 0xf800,0xf800,0xfc00,0xf800,0xfc00,
	 0xfc00,0xfe00,0xde00,0x0000,0x0000} 	// winner
};

/* Display String Literals */

static const char *intro[] = {
	"Start New Game",
	"Setup Game Options",
	"Exit the Game",
	"Copyright (C) 2001 John David Ratliff",
	"http://www.technoplaza.net",
	"Speed: ",
	"Level: ",
	"Return to the Main Menu"
};

static const char *speeds[] = {
	"Very Slow","Slow","Medium Slow","Leisurely","Medium",
	"Average","Average Plus","Quick","Fast","Very Fast"
};

static const char *difficulties[] = {"Easy","Normal","Hard"};

#endif

