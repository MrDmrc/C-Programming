#include <stdio.h>

int b_strcmp(char diziA[],char diziB[])
{
	int i;
	int t=sizeof(diziA)-1;
	int a=0;
	for(i=0;diziA[i]!='\0';i++)
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
		if(t==a)
		{
		printf("Diziler esit \n");
		}
	}
				
	return 0;
}

int main()
{
	
	char diziA[]="abdullah";
	char diziB[]="abdurrahman";

	b_strcmp(diziA,diziB);
	
	return 0;
}
// BEYTULLAH DEMÝRCÝ - EEE 2. SINIF - 200004180
