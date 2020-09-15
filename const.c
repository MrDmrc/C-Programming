#include <stdio.h>

void MultiplyByScalar( double s, double src[], double dest[], int size )
 {
  for(int i=0; i<size; i++) 
  
  {
  
  dest[i] = s*src[i]; 
}
  
 }
int main()  
{ 
double srcarr[5] = {1,2,3,4,5}, destarr[5];
 MultiplyByScalar(3, srcarr, destarr, 5); 
 for(int i=0; i<5; i++) 
 {
 
 printf("%.2f ", destarr[i]); 
}
 }
