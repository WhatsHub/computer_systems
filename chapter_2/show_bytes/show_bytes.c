#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len){

	int i;
	for (i = 0; i < len; i++)
		printf(" %.2x", start[i]);
	
	printf("\n");

}

void show_int(int x) {

	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {

	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_short(short x) {

	show_bytes((byte_pointer) &x, sizeof(short));
}

void show_long(long x) {

	show_bytes((byte_pointer) &x, sizeof(long));
}

void show_double(double x) {

	show_bytes((byte_pointer) &x, sizeof(double));
}

void show_pointer(void *x) {

	show_bytes((byte_pointer) &x, sizeof(void *));
}


void test_show_bytes(int val) {

	int ival = val;
	float fval = (float) ival;
	int *pval = &ival;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

int keep_least_significant(int x, int y){

	int ymask = 0xFFFFFF00;
	int xmask = ~ymask;
	int newx = x & xmask;
	int newy = y & ymask;
	return newx | newy;
}

void is_little_endian(){
	
	int ival = 1;
	unsigned char *pointer = (unsigned char *) &ival;
	if( *pointer == 1) printf("Little Endian\n");
	else printf("Big Endian\n");
		
}

int main() { 
	const char *s = "abcdef";
	int i = 16;
	show_bytes((byte_pointer) s, strlen(s));
	show_int(i);
	test_show_bytes(1);
	is_little_endian();
	
	int x = 0x89ABCDEF;
	int y = 0x76543210;
	
	printf("x = 0x%x\n y = 0x%x\n", x, y);
	printf("keep_least_significant(x,y) = 0x%x\n", keep_least_significant(x,y));
	return 0;
}
