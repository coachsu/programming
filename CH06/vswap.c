#include<stdlib.h>
#include<stdio.h>

void vswap(int x, int y) {
	int temp = x;
	printf("%p %p %p\n", &x, &y, &temp); 
	x = y;
	y = temp;
}

int main(void) {

	int num1 = 10, num2 = 5;
	printf("%p %p\n", &num1, &num2); 
	printf("%d %d\n", num1, num2);
	vswap(num1, num2);
	printf("%d %d\n", num1, num2);

	return EXIT_SUCCESS;
}
