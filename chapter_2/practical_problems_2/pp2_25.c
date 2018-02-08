#include <stdio.h>
#include <string.h>

float sum_elements(float a[], unsigned length){

	int i;
	float result = 0;

	for(i = 0; i < length; i++)
		result += a[i];
	return result;
}

int strlonger(const char *s, const char *t) {

	return strlen(s) > strlen(t);
}

int main (int argc, const char* argv) {

	float array[5] = { 1.0, 2.0, 3.0, 4.0, 5.0};
	unsigned length = 5;
	int i;

	for (i = 0; i < 6; i++) {
		printf("sum_elements length = %u: %f\n", length, sum_elements(array, length));
		--length;

	}

	char *a = "abc";
	char *b = "abcd";

	printf("\n String %s longer than  %s : %d\n", a, b,  strlonger( a, b)); 
	
	return 0;
}
