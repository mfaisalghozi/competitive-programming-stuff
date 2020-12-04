#include <stdio.h>
int main(){
	int row,col,k,numb;
	scanf("%d",&numb);
	
	for(row=1;row<numb;row++,k=0){
		
		for(col=0;col<numb-row;col++){
			printf(" ");
		}
		while(k!=2*row-1){
			printf("*");
			k++;
		}
	printf("\n");
	}
	for(int j=numb;j>=1;j--,k=0){
		for(col=0;col<numb-j;col++){
			printf(" ");
		}
		while(k!=2*j-1){
			printf("*");
			k++;
		}
	printf("\n");
	}
	getchar();
	return 0;
}
