#include <stdio.h>
#include <math.h>
// BEYTULLAH DEMÝRCÝ EEE
int main()
{
	float y,x,error1,y2,error2;
	char forchoopping1[20];
	char forchoopping2[20];
	
	x = 1.37;
	
	y = pow(x, 3) - 7*(pow(x, 2)) + 8*x - 0.35;
	error1= y;
	printf("\tQUESTION 1-A)\n");
	printf("True Val=%lf\n", error1);
	sprintf(forchoopping1, "%.3f", y);
	sscanf(forchoopping1, "%f", &y);
	float true_error1 = (error1 - y);
	float relative_error1 = (true_error1/error1);
	float percent_error1= (true_error1/error1) * 100;
	printf("Chopped Val=%f\nTrue Error=%f\nRelative Error=%f\nPercent Error=%f\n",y,true_error1,relative_error1,percent_error1);
	printf("\n");
	
	y2 = (((x - 7) * x) + 8)*x - 0.35;
	error2 = y2;
	printf("\tQUESTION 1-B)\n");
	printf("True Val=%f\n", error2);
	sprintf(forchoopping2, "%.3f", y2);
	sscanf(forchoopping2, "%f", &y2);
	
	float true_error2 = (error2-y2);
	float relative_error2 = (true_error2 / error2 );
	float percent_error2 = (true_error2 / error2) * 100;
	printf("Chopped Val=%f\nTrue Error=%f\nRelative Error=%f\nPercent Error=%f\n",y2,true_error2,relative_error2,percent_error2);
	
	  return 0;
}
