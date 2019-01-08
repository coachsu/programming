#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int btoui8(char*);
void bprint8(int);

int main(int argc, char *argv[]) {

	char bin1[10];
	char bin2[10];
	scanf("%s", bin1);
	scanf("%s", bin2);

	int result = btoui8(bin1) + btoui8(bin2);
	bprint8(result);
	
	return EXIT_SUCCESS;
}

int btoui8(char* bin) {
	int num=0;
	for(int i=0;i<=7;i++) {
		num += (bin[i]-'0') * pow(2, 7-i);
	}
	return num;
}

void bprint8(int num) {
	for(int i=7;i>=0;i--) {
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
}
