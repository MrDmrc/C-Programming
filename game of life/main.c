#include <stdlib.h>
#include <stdio.h>
#include "gol.h"
#include "gol.c"
int count_alive_neighbors(char *b, int x, int y){
//	FILE *f = fopen(INITIAL_FILE, "r");
	int count = 0;
	int position = 10*y + x;

/* do stuff with b, x and y */
	if(b[position - 1] == ALIVE )
	{
			count++;
	}
	if(b[position  + 1] == ALIVE )
	{
			count++;
	}
	if(b[position  - 9] == ALIVE )
	{
			count++;
	}
	if(b[position  + 9] == ALIVE )
	{
			count++;
	}
	if(b[position  - 10] == ALIVE )
	{
		count++;
	}
	if(b[position  + 10] == ALIVE )
	{
		count++;
	}
	if(b[position  - 11] == ALIVE )
	{
			count++;
	}
	if(b[position  + 11] == ALIVE )
	{
			count++;
	}
	return count;
}

char* evaluate(char *b){
	char *n = create_board();
	/* do stuff with b and n */
	int i, j;
	int z;
	int position;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			position = ((i*M) + j);
				z = count_alive_neighbors(b, j, i);
			 if(*(b + position) == ALIVE ){
				if((z == 2) || (z == 3)){
					//Lives
						*(n + position) = ALIVE ;
				}
				else{
					//Die
					*(n + position) = DEAD ;
				}
			}
			else if (*(b + position) == DEAD ){

				if(z == 3){
					//Give Birth !!
					*(n + position) = ALIVE ;
					}
				else{
					//Still Dead
					*(n + position) = DEAD ;
				}
				}

				}
			}
	return n;
}

int main(){
	int i = 0;
	char *b = NULL;
	char *next_generation = NULL;

	b = create_board();
	read_initial(b);

	printf("Welcome to game of life, please type 'q' to quit\n\n");

	do
	{
		printf("Generation %d\n", ++i);

		print_board(b);
		next_generation = evaluate(b);
		destroy_board(b);
		b = next_generation;

		printf("\n\n");

	}while(getchar() != 'q');
	destroy_board(b);

	return EXIT_SUCCESS;
}
