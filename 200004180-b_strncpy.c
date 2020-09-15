#include <stdio.h>

int b_strncpy(char diziA[],char diziB[])
{
	int i,n;
	printf("number of characters to be copied = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		diziA[i]=diziB[i];			
	}
		
	printf("Number of letters to be copied=%d\nSource=%s\nCpy=%s\n",n,diziB,diziA);
	return 0;
}

int main()
{

	char source[]={"abbas yan basarsa ne olur"};
	char cpy[40];
	b_strncpy(cpy,source);
	
	return 0;
}
// BEYTULLAH DEMÝRCÝ - EEE 2. SINIF - 200004180
