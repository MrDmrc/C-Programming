#include <stdio.h>

int b_strcpy(char diziA[],char diziB[])
{
	int i=0;

	while(diziB[i]!='\0')
	{
		diziA[i]=diziB[i];	
		i++;
		
	}
	printf("Source = %s\nCpy= %s\n",diziB,diziA);
	return 0;
}

int main()
{

	char source[]={"abbas yan basarsa ne olur"};
	char cpy[40];
	char cpy1[15];
	b_strcpy(cpy,source);
	
	return 0;
}
// BEYTULLAH DEMÝRCÝ - EEE 2. SINIF - 200004180
