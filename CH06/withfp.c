#include<stdlib.h>
#include<stdio.h>

int add(int x, int y){ return x+y;}
int sub(int x, int y){ return x-y;}
int mul(int x, int y){ return x*y;}

int (*fun[])(int x, int y) = {add, sub, mul};

int main() {
  
	int x, y;
	int opt;
	scanf("%d %d", &x, &y);
	scanf("%d", &opt);

	printf("%d\n", fun[opt](x, y));

	return EXIT_SUCCESS;
}
