#include<stdlib.h>
#include<stdio.h>
#include"binui.h"

int main(int argc, char *argv[]) {

	char bin1[10];
	char bin2[10];
	scanf("%s", bin1);
	scanf("%s", bin2);

	int result = btoui8(bin1) + btoui8(bin2);
	bprint8(result);
	
	return EXIT_SUCCESS;
}
