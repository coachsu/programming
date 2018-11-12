#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>
#include<math.h>
#include<time.h>

int main(int argc, char *argv[]) {

	int32_t num1, num2, result;
	srand(time(NULL));			// seed

	num2 = rand() % 500;
	result = rand() % 500;
	printf("A + %d = %d\n", num2, result);	
	printf("A = ");	
	scanf("%d", &num1);

	if(num1 + num2 == result) {
		printf("YES\n");
	} else {
		printf("NO. A = %d\n", result - num2);
	}

	return EXIT_SUCCESS;
}
