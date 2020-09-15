#include <stdio.h>

typedef struct {
	float x, y, z;
}Point3_t;
typedef struct {
	Point3_t vertex[8];

}Cube_t;

int main()
{
	Cube_t cube;

	for(int i=0;i<8;i++)
	{
		printf("enter vertex %d coordinates:",i);
		scanf("%f%f%f",
						&(cube.vertex[i].x),
						&(cube.vertex[i].y),
						&(cube.vertex[i].z));

	}
	return 0;
}
