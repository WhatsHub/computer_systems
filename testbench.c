#include <stdio.h>

int logicalShift(int x, int n) {
  int mask = (~(~0 << n) << 31) >> n;
  x = x >> n; 
  return x & ~(mask << 1); 
}

int main(int argc, char **argv) {

    printf("mask: 0x%x\n", logicalShift(0x80000000, 1));
    return 0;
}