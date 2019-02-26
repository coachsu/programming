#include<stdlib.h>
#include<stdio.h>

int main(void) {

	int score[] = {10, 20, 30, 40};
	int* ptr1 = score;
	int* ptr2 = score + 2;
	printf("%p\n", &ptr1);
	printf("%p %d\n", ptr1, *ptr1);
	printf("%p %d\n", ptr1+1, *(ptr1+1));
	printf("%p %d\n", ptr2, *ptr2);

	return EXIT_SUCCESS;
}
