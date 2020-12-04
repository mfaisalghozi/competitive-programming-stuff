#include <stdio.h>
int main(){
	int t,van,co,straw;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		int b;
		van=0,co=0,straw=0;
		scanf("%d",&b);
		for(int j=0;j<b;j++){
			int f;
			scanf("%d",f);
			if(f=='c'){
				co++;
			}
			else if(f=='s'){
				straw++;
			}
			else if(f=='v'){
				van++;
			}
		}
		if(co>straw )
		
		
		
		
	}
	
	
	
	
	getchar();
	return 0;
}
