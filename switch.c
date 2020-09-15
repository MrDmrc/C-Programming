#include <stdio.h>
typedef struct threepoint
{
  float a,b,c;
}TP_t;


void movepoint(TP_t *point1,float fa,float fb,float fc)
{

  (*point1).a += fa;
  (*point1).b += fb;
  (*point1).c += fc;
}

int main() 
{

	TP_t points = {3, 2, 5};
	printf(" a is %2.f b is %2.f and c is %2.f\n", points.a, points.b, points.c);

	movepoint(&points,12, 4, 8);
	printf("new a is %2.f and new b is %2.f and new c is %2.f\n", points.a, points.b, points.c);
	
}
// BEYTULLAH DEMÝRCÝ 200004180 EEE2
