#include<stdio.h>

int main(){

	FILE *filep1, *filep2 ;
	char a;

	filep1 = fopen("yanbas.txt", "r");
	filep2 = fopen("geribas.txt", "w");

	for(a ; (filep1 != NULL && filep2 != NULL) && (a != EOF) ;)
	{
		a = fgetc(filep1);
    	if(a != EOF)
		{
    		fputc(a, filep2);
		}
	}
	fclose(filep1);
	fclose(filep2);

	return 0;
}
