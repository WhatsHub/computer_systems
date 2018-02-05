#include <stdio.h>

int least_significant( int x){

	return x & 0xFF;
}

int main(int argc, char *argv){

	int x = 0x87654321;

	printf("x = 0x%x\n", x);
	
	printf("Least Significant Byte: 0x%x\n", least_significant(x));	
}
