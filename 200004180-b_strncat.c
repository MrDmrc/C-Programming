#include <stdio.h>
int b_strncat(char dizi1[],char dizi2[],int c)
{	
	int a,b = 0;	
	char dizi3[100];
	
	for(a;dizi1[a]!='\0';a++)
	{	
		dizi3[a]=dizi1[a];
	}
	for(b;b<c;b++)
	{		
		dizi3[a]=dizi2[b];
		a++;
	}
	printf("tum diziler = %s\n",dizi3);

	return 0;
	
}
int main()
{
	int c=3;
	char diziA[]="abbas "; 
	char diziB[]="abbas";		
	
	b_strncat(diziA,diziB,c);

	printf("diziA = %s\n",diziA);
	printf("diziB = %s\n",diziB);
	
	return 0;
}
// BEYTULLAH DEMÝRCÝ - EEE 2. SINIF - 200004180
