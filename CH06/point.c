#include<stdlib.h>
#include<stdio.h>
#include<math.h>

struct point {
	float x;
	float y;
};

float dist(struct point src, struct point dst) {
	float xx = pow(src.x - dst.x, 2);
	float yy = pow(src.y - dst.y, 2);
	return sqrt(xx + yy);
};

struct point move(struct point, float, float);

int main() {
  
	struct point src = {0,0};
	struct point dst;
	dst.x = 4;
	dst.y = 3;

	printf("src = (%.2f, %.2f)\n", src.x, src.y);
	printf("dst = (%.2f, %.2f)\n", dst.x, dst.y);

	printf("src to dst is %.2f\n", dist(src, dst));

	dst = move(dst, 4, 3);
	printf("src to dst is %.2f\n", dist(src, dst));

	return EXIT_SUCCESS;
}

struct point move(struct point src, float x, float y) {
  struct point new_point;
  new_point.x = src.x + x;
  new_point.y = src.y + y;
  return new_point;
};
