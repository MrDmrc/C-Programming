#include<stdio.h>

int main()
{

	FILE *file_p;
	char a;

	file_p = fopen("abbas.txt", "r");

	for(a ; file_p != NULL && a != EOF ;)
	{
		  a = fgetc(file_p);
		  printf("%c", a);
	}

	fclose(file_p);

return 0;
}
