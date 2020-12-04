#include <stdio.h>
int main(){
	
	for(int i=0;i<=25;i++){
		for(int j=0;j<=80;j++){
			if(i==0 || i==25 || j==0 || j==80){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
