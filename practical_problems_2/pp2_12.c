#include <stdio.h>

int least_significant( int x){

	return x & 0xFF;
}

int complement_firstbytes ( int x){

	return ((~x) & 0xFFFFFF00) | least_significant(x); 
}

int leastbytesone ( int x){

	return (x | 0x000000FF); 
}

int main(int argc, char *argv){

	int x = 0x87654321;

	printf("x = 0x%x\n", x);
	
	printf("Least Significant Byte: 0x%x\n", least_significant(x));	
	
	printf("Least Significant Byte: 0x%x\n", complement_firstbytes(x));	

	
	printf("Least Significant Byte: 0x%x\n", leastbytesone(x));	
}
