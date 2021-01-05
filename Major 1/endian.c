#include <stdio.h>
#include "major1.h"

int endian(int num){
  int b0,b1,b2,b3;
  b0 =(num & 0x000000FF) >> 0;
  b1 =(num & 0x0000FF00) >> 8;
  b2 =(num & 0x00FF0000) >> 16;
  b3 =(num & 0xFF000000) >> 24;
  return ((b0 << 24)|(b1 << 16)| (b2 << 8) | (b3 < 0));
}