#include <stdio.h>

int bis(int x, int m);
int bic(int x, int m);

int bool_or(int x, int y) {

	int result = bis(x,y);
	return result;
}

int bool_xor(int x, int y) {

	int result = bic(x,(x & y));
	return result;
}


int bis(int x, int m) {

	return x | m;
}

int bic(int x, int m) {

	return x & (~m);
}

int main (int argc, const char *argv){
	
	int x = 0x0;
	int m = 0xFF;

	printf("Test bis x = 0x%x, m = 0x%x. Result: 0x%x\n", x, m, bis(x,m));
	x = 0xFF00FF00;
	m = 0xFF00FF00;

	printf("Test bic x = 0x%x, m = 0x%x. Result: 0x%x\n", x, m, bic(x,m));
	printf("test\n");
}
