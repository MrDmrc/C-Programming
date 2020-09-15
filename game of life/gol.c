#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gol.h"

char* create_board()
{
	char *p = malloc(N*M);
	memset(p, DEAD, N*M);

	return p;
}

void destroy_board(char *b)
{
	free(b);
}

void read_initial(char *b)
{
	int i;
	FILE *f = fopen(INITIAL_FILE, "r");

	if(f == NULL)
	{
		printf("Can not open file %s\n", INITIAL_FILE);
		exit(EXIT_FAILURE);
	}

	for(i=0; i<N*M; i++)
	{
		b[i] = fgetc(f);
	}

	fclose(f);
}


int print_board(char *b)
{
	int i,j;
	int index = 0;

	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			index = i*M + j;

			if (b[index] == ALIVE)
				printf("| # ");
			else
				printf("| . ");

		}
		printf("|\n");
	}

	return 0;
}