#include<stdlib.h>
#include<stdio.h>

int main(void) {

	char name[] = "CSIE";
	char* ptr = name;
	printf("%p %p %c\n", &ptr, ptr, *ptr);
	ptr = name + 1;
	printf("%p %p %c\n", &ptr, ptr, *ptr);
	ptr = name + 3;
	printf("%p %p %c\n", &ptr, ptr, *ptr);

	return EXIT_SUCCESS;
}
