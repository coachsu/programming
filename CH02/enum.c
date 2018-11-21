#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

enum boolean {False, True};
enum day {MON=1, TUE, WED, THU, FRI, SAT, SUN};

int main() {
	int today = TUE;
	enum boolean isSAT = False;
	while(isSAT == False) {
		printf("%d\n", today);
		today++;
		if(today == SAT) {
			isSAT = True;
		}
	}
	return EXIT_SUCCESS;
}
