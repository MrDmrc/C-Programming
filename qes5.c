# include <stdio.h>
# include <math.h>
// BEYTULLAH DEMÝRCÝ EEE
float x = 0.0000000567;//Stefan-Boltzmann constant
float c;

void qs_a()
{
	float H1;//for Tmax
	float H2; // for Tmix
	float A=0.15;
	float e=0.9;
	float Tmax=670;
	float Tmin=630;
	
	printf("A)\n");
	H1=A*e*x*(pow(670,4));
	printf("H = %f for Tmax\n",H1);
	H2=A*e*x*(pow(630,4));
	printf("H = %f for Tmin\n",H2);
	c=(H1-H2)/2;
	printf("=%f",c);
}
void qs_b()
{
	float H1;//for Tmax
	float H2; // for Tmix
	float A=0.15;
	float e=0.9;
	float Tmax=690;
	float Tmin=610;
	
	printf("\nB)\n");
	H1=A*e*x*(pow(690,4));
	printf("H = %f for Tmax\n",H1);
	H2=A*e*x*(pow(610,4));
	printf("H = %f for Tmin\n",H2);
	c=(H1-H2)/2;
	printf("=%f",c);
}
void qs_c()
{
	float H1;//for Tmax/Amax/eMax
	float H2; // for Tmix/Amin/eMin
	
	float Amax=0.16;
	float Amin=0.14;
	float eMax=1.4;
	float eMin=0.85;
	float Tmax=670;
	float Tmin=630;
	
	printf("\nc)\n");
	H1=Amax*eMax*x*(pow(670,4));
	printf("H = %f for T/A/e max\n",H1);
	H2=Amin*eMin*x*(pow(630,4));
	printf("H = %f for T/A/e min\n",H2);
	c=(H1-H2)/2;
	printf("=%f",c);
		
}
int main()
{
	printf("Question 5\n");
	qs_a();
	qs_b();
	qs_c();
}


