#include <stdio.h>

int main(){
	int t,a;
	do{
	scanf("%d",&t);
	}while(t<1 || t>100);
	int h[101],w[101];
	for(int a=0;a<t;a++){
		do{
		scanf("%d %d",&h[a],&w[a]);
		}while(h[a]<2 || (h[a]>100) || (w[a]<2) || (w[a]>100));
	}
	
	for(a=0;a<t;a++){
		printf("Case #%d:\n",a+1);
		for(int k=0;k<h[a];k++){
			for(int j=0;j<w[a];j++){
			
			if(j==0 || k==0 || j==w[a]-1 || k==h[a]-1){
				printf("#");
				}
			else{
				printf(" ");
				}	
			
			}
			printf("\n");
		}
		
	}
	
	
	
	
	getchar();
	return 0;
}
