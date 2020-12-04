#include <stdio.h>

int main(){
	int row,col,b,n,k;
	char c;
	
	scanf("%d",&b);
	for(k=0;k<b;k++){
		scanf("%c %d",&c,&n);
		if(c=='>'){
			printf("Case #%d:\n",k+1);
			for(col=0;col<n;col++){
			for(row=0;row<n+(n/2+1);row++){
				
				if(row==(col*2)){
					printf("*");
					}
				else{
					printf(".");
					}
				}
				printf("\n");
			}
			for(col=0;col<n;col++){
			for(row=0;row<n+(n/2+1);row++){
				
				if(row==n+(n/2+1)-((col*2)+1)){
					printf("*");
					}
				else{
					printf(".");
					}
				}
				printf("\n");
			}		
		}
		else if(c=='<'){
			printf("Case #%d:\n",k+1);
			for(col=0;col<n;col++){
			for(row=0;row<n+(n/2+1);row++){
				
				if(row==n+(n/2+1)-((col*2)+1)){
					printf("*");
					}
				else{
					printf(".");
					}
				}
				printf("\n");
			}	
			for(col=0;col<n;col++){
			for(row=0;row<n+(n/2+1);row++){
				
				if(row==(col*2)){
					printf("*");
					}
				else{
					printf(".");
					}
				}
				printf("\n");
			}	
		}
	}
	
	getchar();
	return 0;
}
