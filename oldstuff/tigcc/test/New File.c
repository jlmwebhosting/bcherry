#include <tigcclib.h>
#include "extgraph.h"

unsigned short ball_C0[] = {0x07E0, 0x1FF8, 0x300C, 0x6006, 0x47E2, 0xCC33, 0xCA53, 0xC993, 0xC993, 0xCA53, 0xCC33, 0x47E2, 0x6006, 0x300C, 0x1FF8, 0x07E0};
unsigned short ball_C1[] = {0x07E0, 0x1FF8, 0x3FFC, 0x7FFE, 0x781E, 0xF00F, 0xF18F, 0xF3CF, 0xF3CF, 0xF18F, 0xF00F, 0x781E, 0x7FFE, 0x3FFC, 0x1FF8, 0x07E0};

void _main(void) {
  GrayOn();
  clrscr();
  GraySprite16_XOR_R(8, 8, 16, ball_C0, ball_C1, GetPlane(0), GetPlane(1));
  ngetchx();
  GrayOff();
}