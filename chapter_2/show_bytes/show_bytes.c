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

void show_long(double  x) {

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

int main() { 
	const char *s = "abcdef";
	int *i = 1;
	show_bytes((byte_pointer) s, strlen(s));
	show_int(i);
	return 0;
}
