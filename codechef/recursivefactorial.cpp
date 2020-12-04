//testing recursive
//factorial
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int biji;
	
	srand(time(NULL));
	for(int a=0;a<20;a++){
	printf("%d ", (rand()%100) + 1 );
	}printf("\n");

	
	getchar();
	return 0;
}
