#include <stdio.h>

int main(){
	int j,row,col;
	char i='A';
	scanf("%d",&j);

	for(col=1;col<=j;col++){
		for(row=1;row<=j-col;row++){
			printf(" ");
		}
		for(row=1;row<=col-1;row++){
			
			printf("%c ",i+((col-1)%26));
			
		}
		
		printf("%c\n",i+((col-1)%26));
	}
	
	
	
	
	
	
	getchar();
	return 0;
}
