#include <stdio.h>

int main(){
	
	int t,a;
	do{
	scanf("%d",&t);
	}while(t<0 || t>100);
	int g[101];
	for(a=0;a<t;a++){
		do{
		scanf("%d",&g[a]);
		}while(g[a]%2!=1 || g[a]>150);
	}
	int h,w;
	for(a=0;a<t;a++){
		
		for(h=0;h<g[a];h++){
			for(w=0;w<g[a];w++){
				if(w==0 || h==0 || h==g[a]-1 || w==g[a]-1 || w==h || w==g[a]-h-1){
					printf("*");
				}
				else{
					printf(" ");
				}
				
			}
			printf("\n");
		}
		printf("\n");
	}
	
	
	
	
	
	
	getchar();
	return 0;
}
