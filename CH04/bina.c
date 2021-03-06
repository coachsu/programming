#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[]) {

	char bin1[10];
	char bin2[10];
	scanf("%s", bin1);
	scanf("%s", bin2);

	int num1=0, num2=0;
	for(int i=0;i<=7;i++) {
		num1 += (bin1[i]-'0') * pow(2, 7-i);
	}
	for(int i=0;i<=7;i++) {
		num2 += (bin2[i]-'0') * pow(2, 7-i);
	}

	int result = num1 + num2;
	for(int i=7;i>=0;i--) {
		printf("%d", (result >> i) & 1);
	}
	printf("\n");
	
	return EXIT_SUCCESS;
}
