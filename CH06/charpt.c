#include<stdlib.h>
#include<stdio.h>

int main(void) {

	char name[] = "CSIE";
	char *ptr1 = name;
	char *ptr2 = name + 2;

	printf("%p\n", &ptr1);
	printf("%p %c\n", ptr1, *ptr1);
	printf("%p %c\n", ptr1+1, *(ptr1+1));
	printf("%p %c\n", ptr2, *ptr2);
	printf("%s\n", ptr2);

	return EXIT_SUCCESS;
}
