#include <stdio.h>

int logicalShift(int x, int n) {
  int mask = (~(~0 << n) << 31) >> n;
  x = x >> n; 
  return x & ~(mask << 1); 
}

int main(int argc, char **argv) {

    printf("mask: 0x%x\n", logicalShift(0x80000000, 1));
    int test = 0x80000000;
    test = test >> 31;
    test = ~test;
    test &= 0x01;
    printf("test 0x100...: 0x%x\n", test);
    test = 0x00000000;
    test = test >> 31;
    test = ~test;
    test &= 0x01;
    printf("test 0x000...: 0x%x\n", test);
    return 0;
}
