#include<stdlib.h>
#include<stdio.h>

struct student {
	int id;
	char* name;
	int chi;
	int mat;
	int eng;
};

float avg(struct student s) {
	int sum = s.chi + s.mat + s.eng;
	float avg = (float)sum / 3;
	return avg;
};

int main() {
	struct student std[5];
	std[0].id = 0;
	std[0].name = "Bob";
	std[0].chi = 100;
	std[0].mat = 70;
	std[0].eng = 80;

	printf("%3s %3s %3s %3s %3s\n", "", "chi", "mat", "eng", "avg");
	printf("%3s %3d %3d %3d %3.0f\n", std[0].name, std[0].chi, std[0].mat, std[0].eng, avg(std[0]));

	return EXIT_SUCCESS;
}
