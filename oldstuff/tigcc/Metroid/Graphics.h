// Header File
// Created 3/16/2005; 7:31:48 PM

struct graphics {
	struct {
		const unsigned char empty8x8[3][8]; // = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
		const unsigned char breakAway[3][8]; // = {0x6A,0xBE,0xDB,0x6F,0xFE,0x57,0xFF,0x2A};
		const unsigned char bombBreak[3][8]; // = {0x40,0x88,0x01,0x30,0x0A,0x10,0x51,0x02};
		const unsigned char rockybottom[3][8]; // = {0xFD,0xEE,0x28,0x29,0xED,0x2D,0x9E,0xB1};
		const unsigned char grassytop[3][8]; // = {0x51,0x81,0xB0,0x48,0x0E,0x64,0x1A,0xBC};
		const unsigned char MetalCorner[3][8]; // = {0xFF,0x41,0x03,0x89,0x09,0x01,0x89,0xFF};
		const unsigned char SingleFloor[3][8]; // = {0x7A,0xFD,0xFF,0x67,0x7E,0xEF,0xDB,0x42};
		const unsigned char MetalBarV[3][8]; // = {0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95};
		const unsigned char MetalBarH[3][8]; // = {0xFF,0x00,0xFF,0x00,0xFF,0x00,0x00,0xFF};
		const unsigned char BlockLeft[3][8]; // = {0x7F,0x80,0x80,0x80,0x80,0x80,0x80,0x7F};
		const unsigned char BlockRight[3][8]; // = {0xFE,0x01,0x01,0x01,0x01,0x01,0x01,0xFE};
		const unsigned char pipe1[3][8]; // = {0xF2,0xE2,0xE2,0xF2,0x7E,0x7F,0x7F,0x76};
		const unsigned char pipe2[3][8]; // = {0x4F,0x47,0x47,0x4F,0x7E,0xFE,0xFE,0x6E};
		const unsigned char corrugatedPipeH[3][8]; // = {0x77,0xCC,0x55,0x55,0x55,0x77,0xFF,0xDD};
		const unsigned char Spikes1[3][8]; // = {0x40,0x44,0xA4,0xAA,0xAA,0x4A,0xF5,0xFF};
		const unsigned char Spikes2[3][8]; // = {0x04,0x44,0x4A,0xAA,0xAA,0xA4,0x5F,0xFF};
		const unsigned char DoorOpenR1[3][8]; // = {0xF8,0xF8,0xFC,0xFC,0xBE,0xBE,0xBE,0xBE};
		const unsigned char DoorOpenR2[3][8]; // = {0xBE,0xFE,0xFF,0xF7,0xF7,0xF7,0xB7,0xB7};
		const unsigned char DoorOpenR3[3][8]; // = {0xB7,0xB7,0xB7,0xF7,0xB7,0xB7,0xB6,0xBE};
		const unsigned char DoorOpenR4[3][8]; // = {0xBE,0xFE,0xFE,0xFC,0xFC,0xFC,0xF8,0xF0};
		const unsigned char DoorOpenL1[3][8]; // = {0x1F,0x1F,0x3F,0x3F,0x7D,0x7D,0x7D,0x7D};
		const unsigned char DoorOpenL2[3][8]; // = {0x7D,0x7F,0xFF,0xEF,0xEF,0xEF,0xED,0xED};
		const unsigned char DoorOpenL3[3][8]; // = {0xED,0xED,0xED,0xEF,0xED,0xED,0x6D,0x7D};
		const unsigned char DoorOpenL4[3][8]; // = {0x7D,0x7F,0x7F,0x3F,0x3F,0x3F,0x1F,0x0F};
		const unsigned char DoorBaseH1[3][8]; // = {0xFF,0xFF,0xFF,0xFF,0x42,0x42,0x81,0x42};
		const unsigned char DoorBaseH2[3][8]; // = {0x42,0xFF,0xFF,0xFF,0x81,0xFF,0x42,0x42};
		const unsigned char DoorBaseH3[3][8]; // = {0x42,0x42,0xC3,0xFF,0x42,0x42,0x42,0x42};
		const unsigned char DoorBaseH4[3][8]; // = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x34,0xFF};
		const unsigned char DoorOpenD1[3][8]; // = {0xFF,0xFE,0xFF,0xFF,0x7F,0x3F,0x07,0x00};
		const unsigned char DoorOpenD2[3][8]; // = {0xFF,0x08,0xFF,0xFF,0x80,0xFF,0xFF,0x3F};
		const unsigned char DoorOpenD3[3][8]; // = {0xFF,0x3E,0xFF,0xFF,0x07,0xFF,0xFF,0xFC};
		const unsigned char DoorOpenD4[3][8]; // = {0xFF,0x0F,0xFF,0xFF,0xFF,0xFC,0xF0,0x00};
		const unsigned char DoorOpenU1[3][8]; // = {0x00,0x07,0x3F,0x7F,0xFF,0xFF,0xFE,0xFF};
		const unsigned char DoorOpenU2[3][8]; // = {0x3F,0xFF,0xFF,0x80,0xFF,0xFF,0x08,0xFF};
		const unsigned char DoorOpenU3[3][8]; // = {0xFC,0xFF,0xFF,0x07,0xFF,0xFF,0x3E,0xFF};
		const unsigned char DoorOpenU4[3][8]; // = {0x00,0xF0,0xFC,0xFF,0xFF,0xFF,0x0F,0xFF};
		const unsigned char DoorBaseV1[3][8]; // = {0xBF,0xBF,0xFF,0xFF,0xBF,0xFF,0xBF,0xBF};
		const unsigned char DoorBaseV2[3][8]; // = {0x0C,0xFF,0x08,0x08,0x08,0x08,0xFF,0x0C};
		const unsigned char DoorBaseV3[3][8]; // = {0x3E,0xEF,0x2E,0x2E,0x2E,0x2E,0xEF,0x3E};
		const unsigned char DoorBaseV4[3][8]; // = {0x4F,0xBF,0x0F,0x0F,0x0F,0x0F,0xBF,0x4F};
		const unsigned char darkRocksBot[3][8]; // = {0x7F,0x74,0x10,0x00,0x00,0x00,0x00,0x00};
		const unsigned char darkRocksDown[3][8]; // = {0x40,0xC0,0x50,0xF0,0xFC,0xBC,0x7F,0xEF};
		const unsigned char darkRocksLeft[3][8]; // = {0x01,0x01,0x01,0x03,0x01,0x00,0x03,0x00};
		const unsigned char darkRocksRDown[3][8]; // = {0xF7,0x57,0x3F,0x1D,0x05,0x03,0x02,0x01};
		const unsigned char darkRocksRight[3][8]; // = {0x80,0x80,0x80,0xC0,0x80,0x00,0xC0,0x00};
		const unsigned char darkRocksRUp[3][8]; // = {0xEF,0xEA,0xFC,0xB8,0xA0,0xC0,0x40,0x80};
		const unsigned char darkRocksSolid[3][8]; // = {0x7B,0xFF,0xB7,0xBE,0xDF,0x7F,0xFE,0xDB};
		const unsigned char darkRocksTop[3][8]; // = {0x00,0x00,0x00,0x00,0x00,0x00,0x54,0x73};
		const unsigned char darkRocksUp[3][8]; // = {0x02,0x03,0x0A,0x0F,0x3F,0x3D,0xFE,0xF7};
		const unsigned char energyTank[3][8];
		const unsigned char missile[3][8];
		const unsigned char powerBomb[3][8];
		const unsigned char stand[3][8];
		const unsigned char superMissile[3][8];


		struct {
			const unsigned char solid[32]; // = {0,0,0,0,0,0,0,0};
			const unsigned char slopeUp[32]; // = {7,7,7,7,7,7,7,7};
			const unsigned char slopeDown[32]; // = {0,1,2,3,4,5,6,7};
			const unsigned char roofUp[32]; // = {7,6,5,4,3,2,1,0};
			const unsigned char roofDown[32]; // = {0,0,0,0,0,0,0,0};
		} masks;

		const unsigned char black[8];
	} tiles;
	struct {

		const unsigned short waver_C0[8]; // = {0x0000,0x0010,0x7478,0xF8C5,0xBF7F,0x6FF3,0x3FF8,0x0000};
		const unsigned short waver_C1[8]; // = {0x0FC0,0x1DE0,0x7E8C,0x292B,0xFFBF,0xFFFC,0x6FD8,0x1FE0};
		const unsigned short sideHopper_C0[12]; // = {0x0180,0x03C0,0x03C0,0x53CA,0x7DFE,0x33CC,0x23C4,0x6006,0x500A,0x381C,0x381C,0xF00F};
		const unsigned short sideHopper_C1[12]; // = {0x0180,0x0000,0x0300,0x1348,0x68D6,0x318C,0x2184,0x6006,0x4002,0x0810,0x381C,0x500A};
		const unsigned short ripper_C0[8]; // = {0x03C0,0x07F0,0x0C34,0x03EC,0x3B75,0xFF76,0xFFF9,0x0FE0};
		const unsigned short ripper_C1[8]; // = {0x03C0,0x0430,0x1000,0x140C,0x2BDC,0xFE3B,0x3FEE,0x0AE0};
		const unsigned short ripper2_C0[8]; // = {0x03C0,0x0FE0,0x2C30,0x37C0,0xAEDC,0x6EFF,0x9FFF,0x07F0};
		const unsigned short ripper2_C1[8]; // = {0x03C0,0x0C20,0x0008,0x3028,0x3BD4,0xDC7F,0x77FC,0x0750};
		const unsigned char skree_C0[11]; // = {0x3C,0x18,0xA5,0x99,0x7E,0x7E,0xE7,0x18,0x00,0x00,0x24};
		const unsigned char skree_C1[11]; // = {0x00,0x18,0xBD,0x99,0xFF,0xE7,0xDB,0x5A,0x66,0x24,0x24};
		const unsigned char skree2_C0[11]; // = {0x3C,0x18,0x34,0x3E,0x7E,0x76,0x70,0x3C,0x14,0x10,0x10};
		const unsigned char skree2_C1[11]; // = {0x00,0x3C,0x1C,0x1E,0x5E,0x5E,0x5C,0x1C,0x3C,0x08,0x18};
		const unsigned char skree3_C0[11]; // = {0x3C,0x3C,0x24,0x3E,0x7E,0x2E,0x5E,0x1C,0x2C,0x08,0x18};
		const unsigned char skree3_C1[11]; // = {0x00,0x3C,0x7C,0x72,0x32,0x72,0x72,0x34,0x34,0x10,0x18};
		const unsigned char skree4_C0[11]; // = {0x3C,0x18,0x2C,0x3C,0x3C,0x3C,0x3C,0x08,0x08,0x10,0x00};
		const unsigned char skree4_C1[11]; // = {0x00,0x18,0x3C,0x2C,0x2C,0x2C,0x2C,0x18,0x18,0x10,0x00};
		const unsigned char skreeProjectile_C0[4]; // = {0x10,0x60,0x60,0x80};
		const unsigned char skreeProjectile_C1[4]; // = {0x70,0x90,0x90,0xE0};
		const unsigned char zebboL_C0[7]; // = {0xA0,0x75,0xFF,0x3E,0x3B,0xAB,0xC4};
		const unsigned char zebboL_C1[7]; // = {0x20,0x50,0xCF,0xF9,0x04,0xA3,0xE4};
		const unsigned char zebboR_C0[7]; // = {0x05,0xAE,0xFF,0x7C,0xDC,0xD5,0x23};
		const unsigned char zebboR_C1[7]; // = {0x04,0x0A,0xF3,0x9F,0x20,0xC5,0x27};
		const unsigned short SpacePirateWalk2Left_C0[20]; // = {0x0D80,0x1C80,0x1BE0,0x1320,0x12F0,0x0FF0,0x01E0,0x01D0,0x1390,0x7FF0,0x5BB0,0x5040,0xA430,0xC030,0x0038,0x002F,0x000D,0x0026,0x01A6,0x01C4};
		const unsigned short SpacePirateWalk2Left_C1[20]; // = {0x0F80,0x1780,0x1BE0,0x13F0,0x1F70,0x0FF0,0x01F0,0x01F0,0x1FA0,0x7CC0,0x5FC0,0x7260,0xE430,0xC030,0x0038,0x003D,0x001F,0x0036,0x01B6,0x01B4};
		const unsigned short SpacePirateWalk1Left_C0[19]; // = {0x0D00,0x1580,0x0BC0,0x07A0,0x1EF0,0x0BB0,0x0330,0x0050,0x17F0,0x7FB0,0x7720,0x16F0,0xC9A0,0x80B8,0x0002,0x0306,0x0E02,0x0B02,0x0006};
		const unsigned short SpacePirateWalk1Left_C1[19]; // = {0x0F00,0x1F80,0x1BC0,0x17F0,0x1DF0,0x0B70,0x0260,0x01F0,0x1FD0,0x7FD0,0x7FC0,0x77F0,0xC9A0,0x8130,0x010F,0x0307,0x0F02,0x0F02,0x0306};
		const unsigned short SpacePirateStandLeft_C0[19]; // = {0x0680,0x09C0,0x05F0,0x0338,0x0B28,0x0D78,0x00A8,0x0018,0x0170,0x04F0,0x09B0,0x09E0,0x33A0,0x2090,0x0110,0x00C8,0x0040,0x02CC,0x03C4};
		const unsigned short SpacePirateStandLeft_C1[19]; // = {0x0780,0x0F40,0x0DB0,0x0BF0,0x0EF8,0x0DF8,0x00F8,0x0070,0x01F0,0x0750,0x0FF0,0x19E0,0x33A0,0x21D0,0x01B0,0x00D8,0x0048,0x02CC,0x027C};
		const unsigned short SpacePirateShootLeft_C0[17]; // = {0x0800,0x08F0,0x0AB0,0x067C,0x4FA2,0x99FE,0x0D16,0x0C5E,0x0396,0x007C,0x01D8,0x0178,0x01E8,0x0038,0x003C,0x0026,0x0179};
		const unsigned short SpacePirateShootLeft_C1[17]; // = {0x0800,0x0D70,0x0FF0,0x047C,0x7FFC,0x9FAC,0x0EDE,0x0FFE,0x03BE,0x007C,0x01A8,0x01A8,0x01F8,0x0078,0x003E,0x0026,0x01B7};
		const unsigned short SpacePirateLookLeft_C0[19]; // = {0x0340,0x01A0,0x03F0,0x0300,0x01F0,0x0198,0x00F0,0x0018,0x01D0,0x0380,0x09B0,0x1560,0x33A0,0x2090,0x01B0,0x00C8,0x0040,0x02CC,0x03C4};
		const unsigned short SpacePirateLookLeft_C1[19]; // = {0x03C0,0x0260,0x0270,0x03B8,0x01F8,0x01F8,0x00B8,0x0070,0x01F0,0x0370,0x0FF0,0x1DE0,0x33A0,0x21D0,0x01B0,0x00D8,0x0048,0x02CC,0x027C};
		const unsigned short SpacePirateWalk2Right_C0[20]; // = {0x01B0,0x0138,0x07D8,0x04C8,0x0F48,0x0FF0,0x0780,0x0B80,0x09C8,0x0FFE,0x0DDA,0x020A,0x0C25,0x0C03,0x1C00,0xF400,0xB000,0x6400,0x6580,0x2380};
		const unsigned short SpacePirateWalk2Right_C1[20]; // = {0x01F0,0x01E8,0x07D8,0x0FC8,0x0EF8,0x0FF0,0x0F80,0x0F80,0x05F8,0x033E,0x03FA,0x064E,0x0C27,0x0C03,0x1C00,0xBC00,0xF800,0x6C00,0x6D80,0x2D80};
		const unsigned short SpacePirateWalk1Right_C0[19]; // = {0x00B0,0x01A8,0x03D0,0x05E0,0x0F78,0x0DD0,0x0CC0,0x0A00,0x0FE8,0x0DFE,0x04EE,0x0F68,0x0593,0x1D01,0x4000,0x60C0,0x4070,0x40D0,0x6000};
		const unsigned short SpacePirateWalk1Right_C1[19]; // = {0x00F0,0x01F8,0x03D8,0x0FE8,0x0FB8,0x0ED0,0x0640,0x0F80,0x0BF8,0x0BFE,0x03FE,0x0FEE,0x0593,0x0C81,0xF080,0xE0C0,0x40F0,0x40F0,0x60C0};
		const unsigned short SpacePirateStandRight_C0[19]; // = {0x0160,0x0390,0x0FA0,0x1CC0,0x14D0,0x1EB0,0x1500,0x1800,0x0E80,0x0F20,0x0D90,0x0790,0x05CC,0x0904,0x0880,0x1300,0x0200,0x3340,0x23C0};
		const unsigned short SpacePirateStandRight_C1[19]; // = {0x01E0,0x02F0,0x0DB0,0x0FD0,0x1F70,0x1FB0,0x1F00,0x0E00,0x0F80,0x0AE0,0x0FF0,0x0798,0x05CC,0x0B84,0x0D80,0x1B00,0x1200,0x3340,0x3E40};
		const unsigned short SpacePirateShootRight_C0[17]; // = {0x0010,0x0F10,0x0D50,0x3E60,0x45F2,0x7F99,0x68B0,0x7A30,0x69C0,0x3E00,0x1B80,0x1E80,0x1780,0x1C00,0x3C00,0x6400,0x9E80};
		const unsigned short SpacePirateShootRight_C1[17]; // = {0x0010,0x0EB0,0x0FF0,0x3E20,0x3FFE,0x35F9,0x7B70,0x7FF0,0x7DC0,0x3E00,0x1580,0x1580,0x1F80,0x1E00,0x7C00,0x6400,0xED80};
		const unsigned short SpacePirateLookRight_C0[19]; // = {0x02C0,0x0580,0x0FC0,0x00C0,0x0F80,0x1980,0x0F00,0x1800,0x0B80,0x01C0,0x0D90,0x06A8,0x05CC,0x0904,0x0D80,0x1300,0x0200,0x3340,0x23C0};
		const unsigned short SpacePirateLookRight_C1[19]; // = {0x03C0,0x0640,0x0E40,0x1DC0,0x1F80,0x1F80,0x1D00,0x0E00,0x0F80,0x0EC0,0x0FF0,0x07B8,0x05CC,0x0B84,0x0D80,0x1B00,0x1200,0x3340,0x3E40};
		const unsigned short SpacePirateLaser_C0[3]; // = {0x8888,0x5555,0x2222};
		const unsigned short SpacePirateLaser_C1[3]; // = {0x4444,0xAAAA,0x1111};
	} enemies;
	struct {
		const unsigned char bombExplode1_C0[8];// = {0x00,0x00,0x18,0x3C,0x3C,0x18,0x00,0x00};
		const unsigned char bombExplode1_C1[8];// = {0x00,0x18,0x24,0x5A,0x5A,0x24,0x18,0x00};
		const unsigned char bombExplode2_C0[8];// = {0x00,0x42,0x00,0x00,0x00,0x00,0x42,0x00};
		const unsigned char bombExplode2_C1[8];// = {0x00,0x00,0x18,0x24,0x24,0x18,0x00,0x00};
		const unsigned char bombExplode3_C0[8];// = {0x00,0x42,0x18,0x24,0x24,0x18,0x42,0x00};
		const unsigned char bombExplode3_C1[8];// = {0x3C,0x00,0xA5,0x81,0x81,0xA5,0x00,0x3C};
		const unsigned char breakAway1_C0[8];// = {0x42,0xD3,0x00,0x02,0x40,0x00,0xCB,0x42};
		const unsigned char breakAway1_C1[8];// = {0x24,0x00,0x89,0x20,0x04,0x91,0x00,0x24};
		const unsigned char breakAway2_C0[8];// = {0x42,0xD3,0x00,0x02,0x40,0x00,0xCB,0x42};
		const unsigned char breakAway2_C1[8];// = {0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00};
		const unsigned char breakAway3_C0[8];// = {0x42,0xDB,0x00,0x42,0x42,0x00,0xDB,0x42};
		const unsigned char breakAway3_C1[8];// = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
		const unsigned short enemyX1_C0[16];// = {0x0000,0x0000,0x0000,0x0000,0x0100,0x0000,0x03C0,0x0250,0x0A40,0x03C0,0x0000,0x0080,0x0000,0x0000,0x0000,0x0000};
		const unsigned short enemyX1_C1[16];// = {0x0000,0x0000,0x0000,0x0000,0x0100,0x03C0,0x0420,0x0430,0x0C20,0x0420,0x03C0,0x0080,0x0000,0x0000,0x0000,0x0000};
		const unsigned short enemyX1_M0[16];// = {0xFFFF,0xFFFF,0xFFFF,0xFBDF,0xF6EF,0xEC37,0xF81F,0xF80F,0xF01F,0xF81F,0xEC37,0xF76F,0xFBDF,0xFFFF,0xFFFF,0xFFFF};
		const unsigned short enemyX2_C0[16];// = {0x0000,0x0000,0x03C0,0x0240,0x0000,0x0000,0x300C,0x2004,0x2004,0x300C,0x0000,0x0000,0x0240,0x03C0,0x0000,0x0000};
		const unsigned short enemyX2_C1[16];// = {0x2004,0x0000,0x9189,0x2004,0x0180,0x0240,0x0420,0x2814,0x2814,0x0420,0x0240,0x0180,0x2004,0x9189,0x0000,0x2004};
		const unsigned short enemyX2_M0[16];// = {0xDFFB,0xFFFF,0x6C36,0xD81B,0xF00F,0xE187,0xC3C3,0xC7E3,0xC7E3,0xC3C3,0xE187,0xF00F,0xD81B,0x6C36,0xFFFF,0xDFFB};
		const unsigned short enemyX3_C0[16];// = {0xBE7D,0x781E,0xE007,0xE3C7,0xC7E3,0x8FF1,0x9DB9,0x1E78,0x1E78,0x9DB9,0x8FF1,0xC7E3,0xE3C7,0xE007,0x781E,0xBE7D};
		const unsigned short enemyX3_C1[16];// = {0xBE7D,0x781E,0xE007,0xE3C7,0xC7E3,0x8FF1,0x9DB9,0x1E78,0x1E78,0x9DB9,0x8FF1,0xC7E3,0xE3C7,0xE007,0x781E,0xBE7D};
		const unsigned short enemyX3_M0[16];// = {0xBE7D,0x781E,0xE007,0xE3C7,0xC7E3,0x8FF1,0x9DB9,0x1E78,0x1E78,0x9DB9,0x8FF1,0xC7E3,0xE3C7,0xE007,0x781E,0xBE7D};
	} sfx;
	struct {
		const unsigned short ball1_C0[8];// = {0x0080,0x0080,0x0160,0x03D0,0x0010,0x0B00,0x0260,0x0180};
		const unsigned short ball1_C1[8];// = {0x01C0,0x07E0,0x0490,0x0C00,0x0FC0,0x0C30,0x0410,0x0260};
		const unsigned short ball2_C0[8];// = {0x0000,0x0340,0x0020,0x0790,0x0310,0x03E0,0x0040,0x0080};
		const unsigned short ball2_C1[8];// = {0x01C0,0x0420,0x0410,0x0C40,0x0C80,0x0C10,0x07B0,0x03E0};
		const unsigned short ball3_C0[8];// = {0x0000,0x00C0,0x0180,0x0290,0x0370,0x0380,0x00E0,0x0000};
		const unsigned short ball3_C1[8];// = {0x01C0,0x0520,0x0410,0x0D00,0x0C90,0x0C10,0x0710,0x03E0};
		const unsigned short leftFall_C0[20];// = {0x0000,0x0090,0x00F0,0x006C,0x0044,0x0090,0x0188,0x01F8,0x2BA0,0x1D90,0x2D00,0x3EC0,0x0D98,0x0E70,0x04A0,0x02A0,0x0110,0x0704,0x058C,0x0604};
		const unsigned short leftFall_C1[20];// = {0x00E0,0x0020,0x01F8,0x008C,0x01AC,0x01EC,0x00FC,0x01FC,0x3918,0x0CB0,0x1EC8,0x3F48,0x0F28,0x0B30,0x05E0,0x0314,0x07FC,0x07AC,0x0784,0x0E04};
		const unsigned short leftFlip1_C0[15];// = {0x00C0,0x0138,0x027A,0x0EA5,0x21A1,0x5BFC,0x58E8,0xEB18,0xF758,0x8190,0x83C0,0x5580,0x7D00,0x0E00,0x1B00};
		const unsigned short leftFlip1_C1[15];// = {0x00C0,0x01F8,0x0336,0x097B,0x2F39,0x7FE0,0x3F18,0xB4C0,0xCAF0,0xDB40,0xEF80,0x6580,0x7D80,0x3780,0x1700};
		const unsigned short leftFlip2_C0[15];// = {0x0800,0x1800,0x0400,0x2E00,0x35C0,0x3F40,0x1370,0x0B70,0x03F2,0x1E04,0x08CC,0x0B16,0x0302,0x0440,0x0398};
		const unsigned short leftFlip2_C1[15];// = {0x0800,0x1000,0x1C00,0x3E80,0x39C0,0x3E00,0x2ED0,0x26FC,0x2E72,0x1F62,0x07BE,0x0F68,0x07DE,0x07AC,0x02F8};
		const unsigned short leftFlip3_C0[15];// = {0x0078,0x0084,0x0064,0x0032,0x0160,0x0285,0x0DA3,0x1925,0x1991,0x003A,0x17C8,0xDCD8,0x84F0,0x4C40,0x1E00};
		const unsigned short leftFlip3_C1[15];// = {0x0078,0x00FC,0x003A,0x003E,0x0176,0x02FB,0x0BC9,0x1F8B,0x193F,0x0EFC,0x17FE,0xF668,0xDE70,0x7E40,0x1F80};
		const unsigned short leftFlip4_C0[15];// = {0x0780,0x0CE0,0x0110,0x2060,0x3468,0x1988,0x103C,0x27E0,0x0768,0x0764,0x017E,0x01D6,0x003A,0x0010,0x000C};
		const unsigned short leftFlip4_C1[15];// = {0x0780,0x0FA0,0x1AF0,0x3DF0,0x0B78,0x3EF0,0x237C,0x273A,0x1FB2,0x05BA,0x003E,0x01CE,0x00BE,0x001C,0x0004};
		const unsigned short leftHurt_C0[26];// = {0x0000,0x00C8,0x01BC,0x0034,0x0230,0x0C20,0x1830,0x0030,0x0180,0x0030,0x0000,0x0040,0x06C0,0x0AC0,0x0D80,0x0180,0x0000,0x0200,0x0080,0x0080,0x00C0,0x0040,0x0000,0x00A0,0x0000,0x0100};
		const unsigned short leftHurt_C1[26];// = {0x00F8,0x0134,0x0242,0x074A,0x0DCE,0x13DC,0x27CC,0x3FC8,0x1E78,0x01C0,0x01C0,0x03A0,0x0920,0x1520,0x1240,0x1A40,0x1F80,0x0D80,0x0740,0x0F40,0x0700,0x0780,0x0FE0,0x1850,0x00E0,0x02C0};
		const unsigned short leftJump1_C0[24];// = {0x0400,0x0D00,0x0300,0x0820,0x0960,0x0960,0x06B0,0x1150,0x1FA0,0x12E0,0x1F50,0x0F40,0x0600,0x0400,0x07F0,0x0120,0x0C48,0x0AC8,0x0308,0x0100,0x0040,0x01C0,0x0000,0x0340};
		const unsigned short leftJump1_C1[24];// = {0x0300,0x0080,0x05C0,0x0A00,0x1E90,0x0670,0x0BD0,0x1F80,0x1DD0,0x1F70,0x1E60,0x08C0,0x0640,0x0980,0x09E0,0x0FF0,0x0CE8,0x05B8,0x0388,0x0180,0x00C0,0x00E0,0x00E0,0x02C0};
		const unsigned short leftJump2_C0[25];// = {0x0200,0x0260,0x0050,0x0160,0x0230,0x7C40,0x23DC,0x15C8,0x06A0,0x11C0,0x24A0,0x1D20,0x08C0,0x0BC0,0x0880,0x0700,0x0080,0x0320,0x0940,0x0080,0x00F0,0x00A0,0x00E0,0x0040,0x0060};
		const unsigned short leftJump2_C1[25];// = {0x0180,0x00E0,0x0530,0x0030,0x0FA8,0x4BE0,0x6DE0,0x2FF8,0x1FC8,0x1FF0,0x1960,0x38E0,0x2720,0x13C0,0x0F80,0x0780,0x0B80,0x01E0,0x05A0,0x00E0,0x00F0,0x0070,0x00F0,0x0020,0x00E0};
		const unsigned short leftKneel_C0[18];// = {0x0080,0x00D0,0x0000,0x0074,0x0144,0x0080,0x01B8,0x01F8,0x2A20,0x1D90,0x0AE0,0x3E40,0x0908,0x01A8,0x04DC,0x03FC,0x05AC,0x08F0};
		const unsigned short leftKneel_C1[18];// = {0x0060,0x0020,0x0178,0x008C,0x01AC,0x01EC,0x00FC,0x01F8,0x3998,0x0CB0,0x1DB0,0x3FC8,0x0FC8,0x0718,0x073C,0x07D4,0x077C,0x07C8};
		const unsigned short leftLand_C0[25];// = {0x0100,0x0040,0x00A0,0x0090,0x0010,0x121C,0x3AAC,0x14BC,0x12A8,0x04E0,0x0730,0x0200,0x09B0,0x0820,0x1E00,0x0380,0x0A00,0x0480,0x0700,0x0160,0x0490,0x00F0,0x0C10,0x0030,0x0040};
		const unsigned short leftLand_C1[25];// = {0x00C0,0x0020,0x0378,0x0038,0x037C,0x00FC,0x1BFC,0x27EC,0x1C78,0x0FE0,0x0690,0x0590,0x0F10,0x1F20,0x1F40,0x0F80,0x0F80,0x0740,0x0700,0x07A0,0x07F0,0x07F0,0x0CC0,0x00F0,0x0140};
		const unsigned short leftMorph_C0[12];// = {0x0380,0x04C0,0x0410,0x1670,0x1BA0,0x1EC0,0x16F0,0x1090,0x0600,0x1480,0x0560,0x0490};
		const unsigned short leftMorph_C1[12];// = {0x0380,0x07C0,0x0BF0,0x1210,0x0610,0x0330,0x1FF0,0x0B70,0x1F90,0x1B10,0x0790,0x0BF0};
		const unsigned short leftRun1_C0[23];// = {0x0200,0x0400,0x0060,0x07C0,0x0400,0x0F40,0x0BE0,0x0940,0x0FC0,0x1860,0x0C80,0x0360,0x0120,0x0200,0x0D80,0x0A68,0x0A18,0x0108,0x0088,0x0060,0x01B0,0x0000,0x01C0};
		const unsigned short leftRun1_C1[23];// = {0x0100,0x0180,0x0BE0,0x0620,0x0FE0,0x0220,0x07E0,0x0F20,0x1F20,0x09E0,0x0FE0,0x0220,0x0260,0x0090,0x0EF0,0x07F8,0x0C98,0x0008,0x0108,0x00E0,0x01D0,0x00E0,0x0040};
		const unsigned short leftRun2_C0[24];// = {0x0600,0x0000,0x0180,0x01D0,0x01D0,0x0850,0x8920,0x52E0,0x1820,0x10C0,0x0740,0x0660,0x0040,0x2340,0x14E0,0x0830,0x0210,0x0614,0x0900,0x0A02,0x0406,0x1807,0x0000,0x0006};
		const unsigned short leftRun2_C1[24];// = {0x0100,0x0180,0x0EE0,0x0070,0x0E60,0x0FE0,0x6DF8,0xCFB0,0x31E0,0x0FC0,0x1FC0,0x0B20,0x1F20,0x1FA0,0x3C90,0x1470,0x0E68,0x0E24,0x0F0C,0x0606,0x0C07,0x1801,0x0006,0x000A};
		const unsigned short leftRun3_C0[23];// = {0x0100,0x0200,0x0040,0x0220,0x03D0,0x0470,0x01D0,0x1FA0,0x1560,0x07E0,0x0293,0x0106,0x0356,0x04CF,0x0A75,0x0234,0x0628,0x0000,0x0A00,0x1400,0x1000,0x6000,0x3000};
		const unsigned short leftRun3_C1[23];// = {0x0080,0x00C0,0x05F0,0x0230,0x0630,0x0330,0x07F0,0x0770,0x1A20,0x0960,0x0733,0x01B5,0x05A7,0x038A,0x0549,0x0E3C,0x0818,0x0E00,0x0600,0x1C00,0x1800,0x9800,0x3800};
		const unsigned short leftRun4_C0[23];// = {0x0200,0x0680,0x0180,0x0410,0x04B0,0x0420,0x0358,0x09A8,0x0FD0,0x0970,0x0520,0x04E0,0x0BA0,0x29C0,0x01F0,0x0CD8,0x07C8,0x0068,0x0020,0x01BC,0x0020,0x0010,0x0008};
		const unsigned short leftRun4_C1[23];// = {0x0180,0x0040,0x02E0,0x0500,0x0F48,0x03F8,0x05E8,0x0FC0,0x0EE8,0x0FB8,0x0738,0x0FE0,0x0360,0x3FE0,0x13F0,0x0FE8,0x04B8,0x00F8,0x00B8,0x00BC,0x001C,0x0008,0x0038};
		const unsigned short leftRun5_C0[23];// = {0x0200,0x0680,0x0180,0x0410,0x04B0,0x0420,0x0358,0x08A8,0x0FD0,0x0970,0x0520,0x04F0,0x0392,0x02A9,0x0582,0x0118,0x0410,0x0508,0x0200,0x1800,0x0000,0x5400,0x3400};
		const unsigned short leftRun5_C1[23];// = {0x0180,0x0040,0x02E0,0x0500,0x0F48,0x03F8,0x05E8,0x0FC0,0x0EE8,0x0FB8,0x0738,0x07D3,0x0333,0x047E,0x06FF,0x0734,0x0118,0x0118,0x0800,0x1E00,0x0C00,0x8C00,0x3C00};
		const unsigned short leftStand_C0[24];// = {0x0000,0x0180,0x0120,0x00C8,0x00A8,0x0200,0x0330,0x0370,0x5FE0,0x3B80,0x17E0,0x7DA0,0x05C0,0x01C0,0x01C0,0x0940,0x0D20,0x0AF8,0x00B0,0x0024,0x0014,0x00CC,0x0044,0x0698};
		const unsigned short leftStand_C1[24];// = {0x01C0,0x0060,0x03F0,0x0138,0x0358,0x03F8,0x01F8,0x03F0,0x7630,0x1960,0x3960,0x7E80,0x0320,0x0720,0x0F00,0x0F80,0x07E0,0x0D08,0x07C8,0x01BC,0x039C,0x03D2,0x03CA,0x09A4};
		const unsigned short rightFall_C0[20];// = {0x0000,0x0900,0x0F00,0x3600,0x2200,0x0900,0x1180,0x1F80,0x05D4,0x09B8,0x00B4,0x037C,0x19B0,0x0E70,0x0520,0x0540,0x0880,0x20E0,0x31A0,0x2060};
		const unsigned short rightFall_C1[20];// = {0x0700,0x0400,0x1F80,0x3100,0x3580,0x3780,0x3F00,0x3F80,0x189C,0x0D30,0x1378,0x12FC,0x14F0,0x0CD0,0x07A0,0x28C0,0x3FE0,0x35E0,0x21E0,0x2070};
		const unsigned short rightFlip1_C0[15];// = {0x0300,0x1C80,0x5E40,0xA570,0x8584,0x3FDA,0x171A,0x18D7,0x1AEF,0x0981,0x03C1,0x01AA,0x00BE,0x0070,0x00D8};
		const unsigned short rightFlip1_C1[15];// = {0x0300,0x1F80,0x6CC0,0xDE90,0x9CF4,0x07FE,0x18FC,0x032D,0x0F53,0x02DB,0x01F7,0x01A6,0x01BE,0x01EC,0x00E8};
		const unsigned short rightFlip2_C0[15];// = {0x0010,0x0018,0x0020,0x0074,0x03AC,0x02FC,0x0EC8,0x0ED0,0x4FC0,0x2078,0x3310,0x68D0,0x40C0,0x0220,0x19C0};
		const unsigned short rightFlip2_C1[15];// = {0x0010,0x0008,0x0038,0x017C,0x039C,0x007C,0x0B74,0x3F64,0x4E74,0x46F8,0x7DE0,0x16F0,0x7BE0,0x35E0,0x1F40};
		const unsigned short rightFlip3_C0[15];// = {0x1E00,0x2100,0x2600,0x4C00,0x0680,0xA140,0xC5B0,0xA498,0x8998,0x5C00,0x13E8,0x1B3B,0x0F21,0x0232,0x0078};
		const unsigned short rightFlip3_C1[15];// = {0x1E00,0x3F00,0x5C00,0x7C00,0x6E80,0xDF40,0x93D0,0xD1F8,0xFC98,0x3F70,0x7FE8,0x166F,0x0E7B,0x027E,0x01F8};
		const unsigned short rightFlip4_C0[15];// = {0x01E0,0x0730,0x0880,0x0604,0x162C,0x1198,0x3C08,0x07E4,0x16E0,0x26E0,0x7E80,0x6B80,0x5C00,0x0800,0x3000};
		const unsigned short rightFlip4_C1[15];// = {0x01E0,0x05F0,0x0F58,0x0FBC,0x1ED0,0x0F7C,0x3EC4,0x5CE4,0x4DF8,0x5DA0,0x7C00,0x7380,0x7D00,0x3800,0x2000};
		const unsigned short rightHurt_C0[26];// = {0x0000,0x1300,0x3D80,0x2C00,0x0C40,0x0430,0x0C18,0x0C00,0x0180,0x0C00,0x0000,0x0200,0x0360,0x0350,0x01B0,0x0180,0x0000,0x0040,0x0100,0x0100,0x0300,0x0200,0x0000,0x0500,0x0000,0x0080};
		const unsigned short rightHurt_C1[26];// = {0x1F00,0x2C80,0x4240,0x52E0,0x73B0,0x3BC8,0x33E4,0x13FC,0x1E78,0x0380,0x0380,0x05C0,0x0490,0x04A8,0x0248,0x0258,0x01F8,0x01B0,0x02E0,0x02F0,0x00E0,0x01E0,0x07F0,0x0A18,0x0700,0x0340};
		const unsigned short rightJump1_C0[24];// = {0x0020,0x00B0,0x00C0,0x0410,0x0690,0x0690,0x0D60,0x0A88,0x05F8,0x0748,0x0AF8,0x02F0,0x0060,0x0020,0x0FE0,0x0480,0x1230,0x1350,0x10C0,0x0080,0x0200,0x0380,0x0000,0x02C0};
		const unsigned short rightJump1_C1[24];// = {0x00C0,0x0100,0x03A0,0x0050,0x0978,0x0E60,0x0BD0,0x01F8,0x0BB8,0x0EF8,0x0678,0x0310,0x0260,0x0190,0x0790,0x0FF0,0x1730,0x1DA0,0x11C0,0x0180,0x0300,0x0700,0x0700,0x0340};
		const unsigned short rightJump2_C0[25];// = {0x0040,0x0640,0x0A00,0x0680,0x0C40,0x023E,0x3BC4,0x13A8,0x0560,0x0388,0x0524,0x04B8,0x0310,0x03D0,0x0110,0x00E0,0x0100,0x04C0,0x0290,0x0100,0x0F00,0x0500,0x0700,0x0200,0x0600};
		const unsigned short rightJump2_C1[25];// = {0x0180,0x0700,0x0CA0,0x0C00,0x15F0,0x07D2,0x07B6,0x1FF4,0x13F8,0x0FF8,0x0698,0x071C,0x04E4,0x03C8,0x01F0,0x01E0,0x01D0,0x0780,0x05A0,0x0700,0x0F00,0x0E00,0x0F00,0x0400,0x0700};
		const unsigned short rightKneel_C0[18];// = {0x0100,0x0B00,0x0000,0x2E00,0x2280,0x0100,0x1D80,0x1F80,0x0454,0x09B8,0x0750,0x027C,0x1090,0x1580,0x3B20,0x3FC0,0x35A0,0x0F10};
		const unsigned short rightKneel_C1[18];// = {0x0600,0x0400,0x1E80,0x3100,0x3580,0x3780,0x3F00,0x1F80,0x199C,0x0D30,0x0DB8,0x13FC,0x13F0,0x18E0,0x3CE0,0x2BE0,0x3EE0,0x13E0};
		const unsigned short rightLand_C0[25];// = {0x0080,0x0200,0x0500,0x0900,0x0800,0x3848,0x355C,0x3D28,0x1548,0x0720,0x0CE0,0x0040,0x0D90,0x0410,0x0078,0x01C0,0x0050,0x0120,0x00E0,0x0680,0x0920,0x0F00,0x0830,0x0C00,0x0200};
		const unsigned short rightLand_C1[25];// = {0x0300,0x0400,0x1EC0,0x1C00,0x3EC0,0x3F00,0x3FD8,0x37E4,0x1E38,0x07F0,0x0960,0x09A0,0x08F0,0x04F8,0x02F8,0x01F0,0x01F0,0x02E0,0x00E0,0x05E0,0x0FE0,0x0FE0,0x0330,0x0F00,0x0280};
		const unsigned short rightMorph_C0[12];// = {0x01C0,0x0320,0x0820,0x0E68,0x05D8,0x0378,0x0F68,0x0908,0x0060,0x0128,0x06A0,0x0920};
		const unsigned short rightMorph_C1[12];// = {0x01C0,0x03E0,0x0FD0,0x0848,0x0860,0x0CC0,0x0FF8,0x0ED0,0x09F8,0x08D8,0x09E0,0x0FD0};
		const unsigned short rightRun1_C0[23];// = {0x0040,0x0020,0x0600,0x03E0,0x0020,0x02F0,0x07D0,0x0290,0x03F0,0x0618,0x0130,0x06C0,0x0480,0x0040,0x01B0,0x1650,0x1850,0x1080,0x1100,0x0600,0x0D80,0x0000,0x0380};
		const unsigned short rightRun1_C1[23];// = {0x0080,0x0180,0x07D0,0x0460,0x07F0,0x0440,0x07E0,0x04F0,0x04F8,0x0790,0x07F0,0x0440,0x0640,0x0900,0x0F70,0x1FE0,0x1930,0x1000,0x1080,0x0700,0x0B80,0x0700,0x0200};
		const unsigned short rightRun2_C0[24];// = {0x0060,0x0000,0x0180,0x0B80,0x0B80,0x0A10,0x0491,0x074A,0x0418,0x0308,0x02E0,0x0660,0x0200,0x02C4,0x0728,0x0C10,0x0840,0x2860,0x0090,0x4050,0x6020,0xE018,0x0000,0x6000};
		const unsigned short rightRun2_C1[24];// = {0x0080,0x0180,0x0770,0x0E00,0x0670,0x07F0,0x1FB6,0x0DF3,0x078C,0x03F0,0x03F8,0x04D0,0x04F8,0x05F8,0x093C,0x0E28,0x1670,0x2470,0x30F0,0x6060,0xE030,0x8018,0x6000,0x5000};
		const unsigned short rightRun3_C0[23];// = {0x0080,0x0040,0x0200,0x0440,0x0BC0,0x0E20,0x0B80,0x05F8,0x06A8,0x07E0,0xC940,0x6080,0x6AC0,0xF320,0xAE50,0x2C40,0x1460,0x0000,0x0050,0x0028,0x0008,0x0006,0x000C};
		const unsigned short rightRun3_C1[23];// = {0x0100,0x0300,0x0FA0,0x0C40,0x0C60,0x0CC0,0x0FE0,0x0EE0,0x0458,0x0690,0xCCE0,0xAD80,0xE5A0,0x51C0,0x92A0,0x3C70,0x1810,0x0070,0x0060,0x0038,0x0018,0x0019,0x001C};
		const unsigned short rightRun4_C0[23];// = {0x0040,0x0160,0x0180,0x0820,0x0D20,0x0420,0x1AC0,0x1590,0x0BF0,0x0E90,0x04A0,0x0720,0x05D0,0x0394,0x0F80,0x1B30,0x13E0,0x1600,0x0400,0x3D80,0x0400,0x0800,0x1000};
		const unsigned short rightRun4_C1[23];// = {0x0180,0x0200,0x0740,0x00A0,0x12F0,0x1FC0,0x17A0,0x03F0,0x1770,0x1DF0,0x1CE0,0x07F0,0x06C0,0x07FC,0x0FC8,0x17F0,0x1D20,0x1F00,0x1D00,0x3D00,0x3800,0x1000,0x1C00};
		const unsigned short rightRun5_C0[23];// = {0x0040,0x0160,0x0180,0x0820,0x0D20,0x0420,0x1AC0,0x1510,0x0BF0,0x0E90,0x04A0,0x0F20,0x49C0,0x9540,0x41A0,0x1880,0x0820,0x10A0,0x0040,0x0018,0x0000,0x002A,0x002C};
		const unsigned short rightRun5_C1[23];// = {0x0180,0x0200,0x0740,0x00A0,0x12F0,0x1FC0,0x17A0,0x03F0,0x1770,0x1DF0,0x1CE0,0xCBE0,0xCCC0,0x7E20,0xFF60,0x2CE0,0x1880,0x1880,0x0010,0x0078,0x0030,0x0031,0x003C};
		const unsigned short rightStand_C0[24];// = {0x0000,0x0180,0x0480,0x1300,0x1500,0x0040,0x0CC0,0x0EC0,0x07FA,0x01DC,0x07E8,0x05BE,0x03A0,0x0380,0x0380,0x0290,0x04B0,0x1F50,0x0D00,0x2400,0x2800,0x3300,0x2200,0x1960};
		const unsigned short rightStand_C1[24];// = {0x0380,0x0600,0x0FC0,0x1C80,0x1AC0,0x1FC0,0x1F80,0x0FC0,0x0C6E,0x0698,0x069C,0x017E,0x04C0,0x04E0,0x00F0,0x01F0,0x07E0,0x10B0,0x13E0,0x3D80,0x39C0,0x4BC0,0x53C0,0x2590};
		const unsigned short rightWallJump_C0[17];// = {0x0080,0x0360,0x06C8,0x0666,0x1EF5,0x2BFC,0x19B8,0x3DDE,0x3BFE,0xEDEE,0xBFEA,0x46E4,0x3E88,0x3B86,0x1E04,0x0E00,0x1000};
		const unsigned short rightWallJump_C1[17];// = {0x0180,0x02E0,0x0638,0x0E2E,0x157F,0x3FC5,0x25BD,0x3FFF,0x3DFE,0xFFF8,0xBFEE,0x5E28,0x1DA8,0x38A4,0x0DC6,0x0E00,0x0000};
		const unsigned short leftWallJump_C0[16];// = {0x0B40,0x1D80,0x11F0,0x0CE8,0x0FD0,0x177C,0xECD3,0x5EF4,0x23E6,0x034B,0x21EF,0x0BF4,0x6B6A,0x2014,0x0004,0x0004};
		const unsigned short leftWallJump_C1[16];// = {0x0FC0,0x1F60,0x1FB0,0x7FE8,0xBFE8,0x8FFE,0xDF9A,0x7FEA,0x03C4,0x33E6,0x33FB,0x30FE,0x7AFE,0x201C,0x000C,0x0004};
		const unsigned short spaceJump4_C0[16];// = {0x01C0,0x0788,0x039C,0x01F0,0x071E,0x016E,0x0518,0x0EDE,0x1E7C,0x0090,0x1850,0x2BE0,0x0020,0x10C0,0x0940,0x0400};
		const unsigned short spaceJump4_C1[16];// = {0x01C0,0x07F8,0x03F4,0x013C,0x07EE,0x0276,0x03FE,0x0D32,0x193C,0x0FF0,0x26B0,0x0F40,0x2E60,0x0760,0x12C0,0x0BC0};
		const unsigned short spaceJump3_C0[13];// = {0x0300,0x1B00,0x2780,0x6B84,0x1681,0x1489,0xB418,0xDBCC,0x5C70,0xE8F0,0x5B15,0x01D2,0x0024};
		const unsigned short spaceJump3_C1[13];// = {0x0300,0x1D00,0x3880,0x5784,0x7FA1,0x6DFF,0xEA47,0xAA6B,0xDBB7,0xFFDF,0x59E8,0x01B9,0x00C2};
		const unsigned short spaceJump2_C0[16];// = {0x0000,0x0050,0x0040,0x02E8,0x0116,0x00FC,0x0030,0x0192,0x1544,0x2CB8,0x3A40,0x0F08,0x1578,0x13A8,0x06B0,0x06F8};
		const unsigned short spaceJump2_C1[16];// = {0x00E0,0x01A8,0x01AC,0x0322,0x0128,0x0110,0x03CC,0x008C,0x1F2C,0x3748,0x26F0,0x1B08,0x1AF8,0x1C68,0x0BF0,0x05F8};
		const unsigned short spaceJump1_C0[13];// = {0x0400,0x1200,0x25C0,0x546D,0x078F,0x071F,0x196F,0x0C17,0x4894,0x4034,0x10EB,0x00F2,0x00EC};
		const unsigned short spaceJump1_C1[13];// = {0x0B00,0x2180,0x4E40,0x0BCD,0xFDFF,0xF6EF,0xEB2B,0xF12B,0x7FDB,0x42FF,0x10F5,0x000E,0x00DC};
	} samus;
	struct {
		const unsigned char powerBeam_C0[4];// = {0x00,0x60,0x60,0x00};
		const unsigned char powerBeam_C1[4];// = {0x60,0x90,0x90,0x60};
		const unsigned char missile6_C0[5];// = {0x00,0x96,0xE9,0x96,0x00};
		const unsigned char missile6_C1[5];// = {0x40,0xE2,0x9F,0xE2,0x40};
		const unsigned char missile5_C0[5];// = {0x00,0x69,0x97,0x69,0x00};
		const unsigned char missile5_C1[5];// = {0x02,0x47,0xF9,0x47,0x02};
		const unsigned char missile4_C0[8];// = {0x1C,0x16,0x07,0x19,0x7B,0x10,0x90,0xC0};
		const unsigned char missile4_C1[8];// = {0x04,0x0A,0x09,0x06,0x10,0x60,0xE0,0xC0};
		const unsigned char missile3_C0[8];// = {0x38,0x68,0xE0,0x98,0xDE,0x08,0x09,0x03};
		const unsigned char missile3_C1[8];// = {0x20,0x50,0x90,0x60,0x08,0x06,0x07,0x03};
		const unsigned char missile2_C0[8];// = {0x03,0x09,0x08,0xDE,0x98,0xE0,0x08,0x38};
		const unsigned char missile2_C1[8];// = {0x03,0x07,0x06,0x08,0x60,0x90,0x50,0x20};
		const unsigned char missile1_C0[8];// = {0xC0,0x90,0x10,0x7B,0x19,0x07,0x16,0x1C};
		const unsigned char missile1_C1[8];// = {0xC0,0xE0,0x60,0x10,0x06,0x09,0x0A,0x04};
		const unsigned char missile8_C0[8];// = {0x70,0x20,0x20,0x50,0x20,0x50,0x50,0x20};
		const unsigned char missile8_C1[8];// = {0x70,0xD8,0x50,0x20,0x20,0x20,0x70,0x20};
		const unsigned char missile7_C0[8];// = {0x20,0x50,0x50,0x20,0x50,0x20,0x20,0x70};
		const unsigned char missile7_C1[8];// = {0x20,0x70,0x20,0x20,0x20,0x50,0xD8,0x70};
	} weapons;
	struct {
		const unsigned long left_C0[12];// = {0x7FFFFFFF,0x7FFFFFFF,0x7DFFFFFF,0x79FFFFFF,0x72BFFFFF,0x70BFFFFF,0x70DFFFFF,0x78BFFFFF,0x7EFFFFFF,0x3FFFFFFF,0x1FFFFFFF,0x00000000};
		const unsigned long left_C1[12];// = {0x40000000,0x47C00000,0x4FE00000,0x4FE00000,0x4BE00000,0x48600000,0x44400000,0x4AA00000,0x47C00000,0x20000000,0x1FFFFFFF,0x00000000};
		const unsigned long middle_C0[12];// = {0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x0000};
		const unsigned long middle_C1[12];// = {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0x0000};
		const unsigned long right_C0[12];// = {0xFFFFFFFE,0xFFFFFFFE,0xFFFFFFFE,0xFFFFFFFE,0xFFFFFFFE,0xFFFFFFFE,0xFFFFFFFE,0xFFFFFFFE,0xFFFFFFFE,0xFFFFFFFC,0xFFFFFFF8,0x00000000};
		const unsigned long right_C1[12];// = {0x00000002,0x00000002,0x00000002,0x00000002,0x00000002,0x00000002,0x00000002,0x00000002,0x00000002,0x00000004,0xFFFFFFF8,0x00000000};
		const unsigned char tankFull_C0[3];// = {0x00,0x00,0x00};
		const unsigned char tankFull_C1[3];// = {0x00,0x60,0x60};
		const unsigned char tankEmpty_C0[3];// = {0xC0,0xC0,0x00};
		const unsigned char tankEmpty_C1[3];// = {0x20,0x20,0xE0};
		const unsigned long weapons_C0[8];// = {0x00000200,0x1C170AC0,0x1C0F1DE0,0x140F9AE0,0x043F9DE0,0x1C219AE0,0x771E1DC0,0x770E0780,0x7F0C0700};
		const unsigned long weapons_C1[8];// = {0x3C0C0D80,0x243B1FC0,0x243F3260,0x2C73A720,0x3C40A220,0x667FB760,0xEF1E1240,0x89120F80,0xFF0C0700};
		const unsigned char numbers[20][7];
	} HUD;
	struct {
		const unsigned char energy1_C0[8];// = {0x00,0x18,0x24,0x5A,0x5A,0x24,0x18,0x00};
		const unsigned char energy1_C1[8];// = {0x00,0x24,0x5A,0x24,0x24,0x5A,0x24,0x00};
		const unsigned char energy1_M0[8];// = {~0x00,~0x3C,~0x7E,~0x7E,~0x7E,~0x7E,~0x3C,~0x00};
		const unsigned char energy2_C0[8];// = {0x00,0x3C,0x7E,0x66,0x66,0x7E,0x3C,0x00};
		const unsigned char energy2_C1[8];// = {0x00,0x00,0x18,0x24,0x24,0x18,0x00,0x00};
		const unsigned char energy2_M0[8];// = {~0x00,~0x3C,~0x7E,~0x66,~0x66,~0x7E,~0x3C,~0x00};
		const unsigned char energy3_C0[8];// = {0x3C,0x66,0xC3,0x81,0x81,0xC3,0x66,0x3C};
		const unsigned char energy3_C1[8];// = {0x3C,0x66,0xC3,0x81,0x81,0xC3,0x66,0x3C};
		const unsigned char energy3_M0[8];// = {~0x3C,~0x66,~0xC3,~0x81,~0x81,~0xC3,~0x66,~0x3C};
		const unsigned char missile_C0[8];// = {0x60,0x60,0x90,0xF0,0x60,0xF0,0xD0,0xB0};
		const unsigned char missile_C1[8];// = {0x60,0x60,0xF0,0x90,0x00,0xF0,0x60,0xF0};
		const unsigned char missile_M0[8];// = {~0x60,~0x60,~0xF0,~0xF0,~0x60,~0xF0,~0xF0,~0xF0};
		const unsigned char superMissile_C0[8];// = {0x60,0x60,0xF0,0xD0,0x20,0xF0,0xF0,0x60};
		const unsigned char superMissile_C1[8];// = {0x60,0x90,0xF0,0xF0,0x60,0xF0,0x90,0x60};
		const unsigned char superMissile_M0[8];// = {~0x60,~0xF0,~0xF0,~0xF0,~0x60,~0xF0,~0xF0,~0x60};
		const unsigned char powerBomb_C0[8];// = {0x18,0x00,0xFF,0xE7,0xDB,0xFF,0x00,0x18};
		const unsigned char powerBomb_C1[8];// = {0x18,0x7E,0x99,0x81,0xE7,0xBD,0x7E,0x18};
		const unsigned char powerBomb_M0[8];// = {~0x18,~0x7E,~0xFF,~0xFF,~0xFF,~0xFF,~0x7E,~0x18};
	} pickups;
};