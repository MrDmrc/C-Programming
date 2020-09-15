#include <stdio.h>
#include <math.h>

typedef struct {
	float x, y;
} Point_t;

float cal_distance(Point_t p1, Point_t p2)
{
	float rx = (p1.x - p2.x)*(p1.x - p2.x);
	float ry = (p1.y - p2.y)*(p1.y - p2.y);

	return sqrt(rx + ry);
}

void printpoint(Point_t p)
{
	printf("(%f, %f)\n", p.x, p.y);
}

int main() {
	
	float a,b,c,d;
	printf("enter first point x(a,b):");
	scanf("%f\n%f",&a ,&b);
	printf("enter first point y(c,d):");
	scanf("%f\n%f",&c ,&d);	

	Point_t p1 = {a,b};
	Point_t p2 = {c,d};

	float e = cal_distance(p1, p2);

	printf("distance is %f\n", e);
	return 0;
}
