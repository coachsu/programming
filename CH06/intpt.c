#include<stdlib.h>
#include<stdio.h>

int main(void) {

	int score[] = {10, 20, 30, 40};
	int* ptr = score;
	printf("%p %p %d\n", &ptr, ptr, *ptr);
	ptr = score + 1;
	printf("%p %p %d\n", &ptr, ptr, *ptr);
	ptr = score + 3;
	printf("%p %p %d\n", &ptr, ptr, *ptr);

	return EXIT_SUCCESS;
}
