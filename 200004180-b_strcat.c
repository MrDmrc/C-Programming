#include <stdio.h>
int b_strcat(char dizi1[],char dizi2[])
{	
	int a,b = 0;	
	char dizi3[100];
	
	for(a;dizi1[a]!='\0';a++)
	{	
		dizi3[a]=dizi1[a];
	}
	for(b;dizi2[b]!='\0';b++)
	{		
		dizi3[a]=dizi2[b];
		a++;
	}
	printf("tum diziler = %s\n",dizi3);

	return 0;
	
}
int main()
{
	int n=2;
	char diziA[]="abbas "; 
	char diziB[]="yanbas";		

	b_strcat(diziA,diziB);		
	
	printf("diziA = %s\n",diziA);
	printf("diziB = %s\n",diziB);
	

	return 0;
}
// BEYTULLAH DEMÝRCÝ - EEE 2. SINIF - 200004180
	
