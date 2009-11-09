// C Header File
// Created 1/14/2004; 5:27:48 PM

unsigned short o_l[] = {0x00C8,0x07FA,0x0FFC,0x1E17,0x5002,0x3803,0x2003,0x7003,
												0x6002,0x600A,0x7007,0x200C,0x3458,0x1FFC,0x0FE8,0x0820};
unsigned short o_d[] = {0x03F0,0x0FFC,0x1FFE,0x3C0E,0x3807,0x7007,0x7007,0x6007,
												0x6007,0x6007,0x600E,0x701E,0x783C,0x3FF8,0x1FF0,0x07C0};
unsigned short x_l[] = {0x0000,0x7803,0x7807,0x7E0F,0x1F3E,0x0FBC,0x03F8,0x01F8,
												0x01F0,0x03F8,0x07F8,0x1F38,0x7E1C,0x7C0E,0x700F,0x2003};
unsigned short x_d[] = {0x0000,0x3006,0x7C0F,0x3E1F,0x1F1E,0x0FFC,0x07F8,0x03F0,
												0x03F0,0x07F0,0x0FF8,0x1F3C,0x3E3E,0x7C1F,0x780F,0x0006};
unsigned short blank[] = {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
													0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000};
unsigned short full[] = {0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
												 0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF};
unsigned long horiz_grid_l[] = {0x3FFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x3FFFFFFF};
unsigned long horiz_grid_r[] = {0xFFFFFC00,0xFFFFFF00,0xFFFFFF00,0xFFFFFC00};
unsigned char vert_grid[] = {0x60,0x60,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,
														 0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,
														 0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0x60,0x60};
unsigned long title[2][500] = {{
// tile 0
0x00000000,0x00000000,0x0fffff0e,0x0fffff9f,0x0ffffe95,0x0ffffe95,0x0ff26195,0x07faff95,0x000a8015,0x000a8015,
// tile 1
0x00000000,0x00000000,0x000fe000,0x00393800,0x007ff400,0x00b83a00,0x0167cd00,0x02d83600,0x03a00f80,0x07c00b00,
// tile 2
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 3
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 4
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 10
0x000a8015,0x000a8015,0x000a8015,0x000a8015,0x000a8015,0x000a8015,0x000a8015,0x000a8015,0x000a8017,0x000a8017,
// tile 11
0x074007c0,0x0b800440,0x0f8003c0,0x0e000000,0x07000000,0x07000000,0x0f000000,0x1f000000,0x1f000000,0x1f000000,
// tile 12
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 13
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 14
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 20
0x000a8017,0x000a8017,0x000a8017,0x000a8017,0x000a8017,0x000a8017,0x000b8017,0x000b8017,0x000b8017,0x000b8017,
// tile 21
0x1f000000,0x0f000000,0x07000000,0x07000100,0x060003c0,0x0e800380,0x0b8005c0,0x030007c0,0x07c00b00,0x01a01f80,
// tile 22
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 23
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 24
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 30
0x000b8017,0x000b8017,0x000b8017,0x000b8017,0x000f801b,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 31
0x02d83e80,0x01efdd00,0x013ffa00,0x00dfe7ff,0x00200fff,0x000fffff,0x00001fff,0x0000100c,0x0000001e,0x0000001e,
// tile 32
0x00000000,0x00000000,0x00000000,0xfe03e000,0xfe02d000,0xfe03f000,0xfe05f800,0x02056801,0x00052802,0x000ff802,
// tile 33
0x00000000,0x00000000,0x00000000,0x0fc00000,0x3b700000,0x5ff80000,0xbff40000,0x603e0000,0xdcce0000,0xa02d0000,
// tile 34
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 40
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 41
0x0000001e,0x0000001e,0x0000001e,0x0000001e,0x0000001e,0x0000001e,0x0000001e,0x0000001e,0x0000001e,0x0000001e,
// tile 42
0x000adc05,0x000bd405,0x000bf403,0x001d1c0a,0x00152e0b,0x00172a0b,0x001e3a0b,0x002a1707,0x002a1707,0x002e1507,
// tile 43
0x40170000,0xc00b8000,0x80088000,0x800f0000,0x80000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 44
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 50
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 51
0x0000001e,0x0000001e,0x0000001e,0x0000001e,0x0000001e,0x0000001e,0x0000001e,0x0000001e,0x0000001e,0x0000001e,
// tile 52
0x003c1f07,0x0057fb87,0x005ffe8b,0x005ffe8b,0x00ffff8b,0x00a001ca,0x00b8054a,0x00f80745,0x01d002e5,0x015002e5,
// tile 53
0x00000000,0x00000000,0x00000000,0x00000000,0x80038000,0x80054000,0x80054000,0xc003c000,0x400a8000,0xe0168000,
// tile 54
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 60
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x06801180,0x0e803f00,0x1f801b00,
// tile 61
0x0000001e,0x0000001e,0x0000001e,0x0000001e,0x0000001e,0x00000012,0x00000000,0x006c9000,0x00f5b000,0x01bd7000,
// tile 62
0x017002a2,0x01e003e2,0x02a00171,0x02a00170,0x02e00150,0x02400090,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 63
0xf86d0000,0xefdf0000,0x7ffa0000,0x9fe40000,0x63980000,0xf07fe00f,0xffffe039,0xffffe07f,0xffffe0bf,0x00e00170,
// tile 64
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xe001fffc,0x3801fffc,0xfc01fffc,0xfa01fffc,0x1d01c000,
// tile 70
0x17d02bb7,0x37100d66,0x3e9076f6,0x2e287734,0x3a68533c,0x3bc01345,0x2fd002ad,0x321025df,0x00a00200,0x00000400,
// tile 71
0x8177f5d1,0xe37efcff,0xe2eedc9d,0xa2bea69f,0x639ce5a5,0xe2e568e5,0xa28d45a1,0xe13673e4,0x00000001,0x00000001,
// tile 72
0xd8000000,0x78000000,0xb8000000,0x78000000,0x30000000,0x90000000,0xd0000000,0xa0000000,0xa0000000,0x40000000,
// tile 73
0x00e002cc,0x00e001b0,0x00e005c0,0x00e00740,0x00e00380,0x00e00e00,0x00e00f00,0x00e00f00,0x00e00700,0x00e00700,
// tile 74
0x6681c000,0x1b81c000,0x0741c000,0x05c1c000,0x0381c000,0x02e1c000,0x01e1c000,0x01e1c000,0x01c1fff8,0x01c1fff8,
// tile 80
0x00400000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x60549310,0x6c6d3d36,0x2c447b26,0x08477304,
// tile 81
0x00000001,0x00000000,0x00000000,0x01800680,0x01800600,0x01800600,0x47c02689,0x6b807a9f,0x21807e99,0x79806699,
// tile 82
0xc0000000,0x00000000,0x00000000,0x02800001,0x01000001,0x02000001,0x031102c3,0x823b66c1,0x821266e1,0x82004221,
// tile 83
0x00e00600,0x00e00e00,0x00e00e00,0xa0e00600,0xc0e00700,0x80e00700,0xd6e00f00,0x94e00e00,0x98e00a80,0x98e00380,
// tile 84
0x00e1fff8,0x00e1fff8,0x00e1c000,0x00c1c000,0x01c1c000,0x01c1c000,0x01e1c000,0x00e1c000,0x03a1c000,0x0381c000,
// tile 90
0x084b737c,0x08447340,0x2c457b04,0x6c477d36,0x68495334,0x00000300,0x00003f00,0x00003200,0x00000000,0x00000000,
// tile 91
0x65806699,0x0b806699,0x03827e99,0x6f0b7a9f,0x65d32689,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 92
0x8203c3e1,0x82000201,0x820046a1,0x820366e1,0x3203424d,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 93
0x98e00740,0x98e001a0,0x98e002d8,0x98e001ff,0x98e0013f,0x00e000df,0x00e00023,0x0000001c,0x00000000,0x00000000,
// tile 94
0x05c1c000,0x0b01c000,0x3681c000,0xff01fffe,0xf901fffe,0xf601fffe,0x8801fffe,0x70000000,0x00000000,0x00000000,
},
// ---- plane 2 ----
{
// tile 0
0x00000000,0x00000000,0x00000000,0x00000000,0x07ffff0e,0x07ffff0e,0x000f9e0e,0x0007000e,0x0007000e,0x0007000e,
// tile 1
0x00000000,0x00000000,0x00000000,0x0007c000,0x001ff800,0x007ffc00,0x00f83e00,0x01e00f00,0x01c00700,0x03800780,
// tile 2
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 3
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 4
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 10
0x0007000e,0x0007000e,0x0007000e,0x0007000e,0x0007000e,0x0007000e,0x0007000e,0x0007000e,0x0007000c,0x0007000c,
// tile 11
0x03800380,0x07000380,0x07000000,0x07000000,0x0e000000,0x0e000000,0x0e000000,0x0e000000,0x0e000000,0x0e000000,
// tile 12
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 13
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 14
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 20
0x0007000c,0x0007000c,0x0007000c,0x0007000c,0x0007000c,0x0007000c,0x0006000c,0x0006000c,0x0006000c,0x0006000c,
// tile 21
0x0e000000,0x0e000000,0x0e000000,0x0e000000,0x0f000000,0x070001c0,0x07000380,0x07800380,0x03800780,0x03c00700,
// tile 22
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 23
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 24
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 30
0x0006000c,0x0006000c,0x0006000c,0x0006000c,0x00000004,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 31
0x01e00f00,0x00f03e00,0x00fffc00,0x003ff800,0x001fffff,0x00000fff,0x00000fff,0x00000fff,0x0000000c,0x0000000c,
// tile 32
0x00000000,0x00000000,0x00000000,0x00000000,0xfc01e000,0xfc01e000,0xfc03e000,0xfc03f000,0x0003f001,0x00033001,
// tile 33
0x00000000,0x00000000,0x00000000,0x00000000,0x07800000,0x3fe00000,0x7ff80000,0xfff80000,0xe03c0000,0xc01e0000,
// tile 34
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 40
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 41
0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x0000000c,
// tile 42
0x00073003,0x00063803,0x00061807,0x00063807,0x000e1806,0x000c1c06,0x000c0c06,0x001c0c0e,0x001c0c0e,0x00180e0e,
// tile 43
0x800e0000,0x00060000,0x00070000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 44
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 50
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 51
0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x0000000c,
// tile 52
0x0018060e,0x0038060e,0x003fff06,0x003fff06,0x003fff06,0x007fff07,0x00600387,0x00600183,0x00600183,0x00e00183,
// tile 53
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00038000,0x00038000,0x00070000,0x80070000,0x800f0000,
// tile 54
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 60
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x01000e00,0x01001f80,0x00003180,
// tile 61
0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x0000000c,0x00000000,0x00106000,0x00084000,0x00488000,
// tile 62
0x00c001c1,0x00c000c1,0x01c000c0,0x01c000c0,0x018000e0,0x01800060,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 63
0xc01e0000,0xf03c0000,0xfffc0000,0x7ff80000,0x1fe00000,0x0f800000,0xffffe007,0xffffe01f,0xffffe07f,0xffffe0ff,
// tile 64
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xc001fffc,0xf001fffc,0xfc01fffc,0xfe01fffc,
// tile 70
0x08081108,0x08c83219,0x01c83f09,0x11d021cb,0x11d021c3,0x107061fa,0x10606172,0x0c604220,0x00403c00,0x00c03800,
// tile 71
0x00880226,0x00810326,0x01112366,0x41017964,0xc1033a4c,0x411a3f4c,0x41f23e4c,0x00c00c08,0x00000000,0x00000000,
// tile 72
0x00000000,0x80000000,0xc0000000,0x80000000,0xc0000000,0x60000000,0x60000000,0x40000000,0x40000000,0x80000000,
// tile 73
0x00e001f0,0x00e003c0,0x00e00380,0x00e00380,0x00e00700,0x00e00700,0x00e00600,0x00e00600,0x00e00e00,0x00e00e00,
// tile 74
0x1f01c000,0x0701c000,0x0381c000,0x0381c000,0x01c1c000,0x01c1c000,0x00c1c000,0x00c1c000,0x00e1c000,0x00e1fff8,
// tile 80
0x00800000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x18a30c0c,0x00808200,0x40888000,0x44808022,
// tile 81
0x00000000,0x00000000,0x00000000,0x00000040,0x00000000,0x00000000,0x39911846,0x04110440,0x40110040,0x00110040,
// tile 82
0x00000000,0x00000000,0x00000000,0x01000000,0x02000000,0x02000000,0x0728c101,0x02200000,0x02200000,0x02222440,
// tile 83
0x00e00e00,0x00e00e00,0x00e00e00,0x40e00e00,0x00e00e00,0x00e00e00,0x88e00600,0x08e00700,0x00e00700,0x00e00700,
// tile 84
0x00e1fff8,0x00e1fff8,0x00e1fff8,0x00e1c000,0x00e1c000,0x00e1c000,0x00c1c000,0x01c1c000,0x01c1c000,0x01c1c000,
// tile 90
0x4484803e,0x44888020,0x40888022,0x00888200,0x10868c08,0x00000000,0x00000000,0x00000c00,0x00000000,0x00000000,
// tile 91
0x18110040,0x04110040,0x04110040,0x00910440,0x180d1846,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 92
0x0223e7c0,0x02220400,0x02222040,0x02200000,0x02208180,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
// tile 93
0x00e00380,0x00e003c0,0x00e001e0,0x00e000f0,0x00e000ff,0x00e0003f,0x00e0001f,0x00e00003,0x00000000,0x00000000,
// tile 94
0x0381c000,0x0781c000,0x0f01c000,0x1e01c000,0xfe01fffe,0xf801fffe,0xf001fffe,0x8001fffe,0x00000000,0x00000000,
}};