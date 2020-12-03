#include <stdio.h>

int main(){
	int a,t,e=0;
	char c[1000000];
	
	scanf("%d",&t);
	for(a=0;a<t;a++){
		scanf("%c",&c[a]);
		e+=c[a];
	}
	printf("%d",e);
	
	
	
	
	
	
	getchar();
	return 0;
}
