#include<stdlib.h>
#include<stdio.h>
#include<math.h>

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
