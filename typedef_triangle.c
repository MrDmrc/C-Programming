#include <stdio.h>



typedef struct point {
	float x;
	float y;
}Point_t;

typedef struct{
	Point_t v1, v2, v3;
}Triangle_t;

int main(int argc, char const *argv[])
{
	Triangle_t t = {{0,0},{0,1},{1,0}};
	
	printf("vertex 1: %f %f\n", t.v1.x, t.v1.y);
	return 0;

}
