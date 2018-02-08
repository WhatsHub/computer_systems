#include <stdio.h>

void inplace_swap(int *x, int *y);
void reverse_array(int a[], int cnt);
void printarray( int array[], size_t arraysize);

int main(int argc, char* argv[]){

	int x = 10;
	int y = 12;

	int a_size = 4;
	int a[4] = {1,2,3,4};

	printf("Array: ");
	printarray(a, a_size);

	printf("INPLACESWAP ARRAY:\n");

	reverse_array(a, a_size);
	printf("New Array: ");
	printarray(a, a_size);

	printf("x = %d , y = %d \nINPLACE SWAP:\n", x, y);

	inplace_swap(&x, &y);

	printf("new x = %d , new y = %d \n", x, y);

	return 0;
}

void inplace_swap(int *x, int *y){

	*y = *x ^ *y; /* Step 1 */
	*x = *x ^ *y; /* Step 2 */
	*y = *x ^ *y; /* Step 3 */
}


void reverse_array(int a[], int cnt){
	
	int first, last;
	for (first = 0, last = cnt-1; first < last; first++, last--)
		inplace_swap(&a[first], &a[last]);
}


void printarray( int array[], size_t arraysize){

	size_t cnt;
	printf("{%d", array[0]);
	for(cnt = 1; cnt < arraysize; ++cnt){

		printf(", %d", array[cnt]);
	}
	printf("}\n"); 
}
