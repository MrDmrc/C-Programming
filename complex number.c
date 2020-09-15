#include <stdio.h>

typedef struct complex_numz {
    float real,img;
} complex_z;


    complex_z sum(complex_z num1, complex_z num2) {
    complex_z result;
    result.real = num1.real + num2.real;
    result.img = num1.img + num2.img;
    return (result);
}
int main()
{		
float a,b,c,d;
	printf("first real and img num :");
	scanf("%f\n%f",&a ,&b);	
	printf("second real and img num:");
	scanf("%f\n%f",&c ,&d);	

	
complex_z num1= {a, b};
complex_z num2= {c, d};

complex_z sumres = sum(num1, num2);

printf("sum of real numbers = %f\nsum of img numbers = %f \n", sumres.real, sumres.img);
}
// BEYTULLAH DEMÝRCÝ 200004180 EEE2
