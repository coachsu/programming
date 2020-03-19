#include<stdlib.h>
#include<stdio.h>

int main(void) {
	// Input
	int arr[50];
	int* ptr = arr;
	int size = 0;
	while(scanf("%d", ptr+size)) {
		size++;
		if(getchar() == '\n') {
			break;
		}
	}
	// Coding here

	return EXIT_SUCCESS;
}
