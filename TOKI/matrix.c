#include <stdio.h>
int main(){
	int c,d,matrix[3][3],transpose[3][3];
	
	for (c = 0; c < 3; c++){
      for(d = 0; d < 3; d++){
         scanf("%d", &matrix[c][d]);
         transpose[d][c] = matrix[c][d];
     	}
     }
   for (c = 0; c < 3; c++){
      for( d = 0 ; d < 3 ; d++ ){
         printf("%d",transpose[c][d]);
     	}
    printf("\n");
	}
	
	return 0;
}
