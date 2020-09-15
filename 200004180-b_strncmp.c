#include <stdio.h>
int b_strncmp(char diziA[],char diziB[],int n)
{
	int i;
	int a=0;
	for(i=0;i<n;i++)
	{
		if(diziA[i]==diziB[i])
		{
			a++;		
		}
		else
		{
			printf("Diziler esit degildir.\n");
			break;
		}
		if(n==a)
		{		
			printf("esitler\n");		
		}
	}
}
int main()
{
	int n=4;
	char diziA[]="abdullah";
	char diziB[]="abdurrahman";

	b_strncmp(diziA,diziB,n);
	
	return 0;
}
// BEYTULLAH DEMÝRCÝ - EEE 2. SINIF - 200004180
