#include<stdlib.h>
#include<stdio.h>

void aswap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(void) {

	int num1 = 10, num2 = 5;
	printf("%d %d\n", num1, num2);
	aswap(&num1, &num2);
	printf("%d %d\n", num1, num2);

	return EXIT_SUCCESS;
}
