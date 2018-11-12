#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>

#define MAX 100
#define MIN 0

int main() {
	uint8_t score;
	scanf("%hhd", &score);

	if(score > MAX || score < MIN) {
		printf("Out of range\n");	
	} else {
		printf("In range\n");
	}
	
	return EXIT_SUCCESS;
}
