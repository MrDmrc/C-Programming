#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i,x;
	int *n;
	printf("how many integers will be entered=");
	scanf("%d",&i);
	n=(int *) malloc(i*sizeof(int));
	printf("\n");
	for(x=0;x<i;x++)
	{
		printf("%d.integer =",x+1);
		scanf("%d",&n[x]);
	}
	printf("\n");
	for(x=0;x<i;x++)
	{
		printf("%d.integer =%d\n",x+1,n[x]);
	}
	return 0;
}
