#include<stdlib.h>
#include<stdio.h>

int add(int x, int y){ return x+y;}
int sub(int x, int y){ return x-y;}
int mul(int x, int y){ return x*y;}

int main() {
  
	int x, y;
	int opt;
	scanf("%d %d", &x, &y);
	scanf("%d", &opt);

	switch(opt) {
	case 0:
		printf("%d\n", add(x, y));
		break;
	case 1:
		printf("%d\n", sub(x, y));
		break;
	case 2:
		printf("%d\n", mul(x, y));
		break;
	}

	return EXIT_SUCCESS;
}
