#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>

#define MAX 100
#define MIN 0

int main() {
	uint8_t score;
	scanf("%hhd", &score);

	if(score > MAX || score < MIN) {
		printf("NO. %d ~ %d\n", MIN, MAX);	
	} else {
		printf("YES\n");
	}
	
	return EXIT_SUCCESS;
}
