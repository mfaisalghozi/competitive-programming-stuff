#include <stdio.h>

int main (){
	
	int a,b,d[a];
	scanf("%d",&a);
	for(b=0;b<a;b++){
		scanf("%d",&d[b]);		
	}
	
	for(b=0;b<a;b++){
		printf("Case #%d:\n",b+1);
		int c,j,l=0;
		for(c=1;c<=d[b];c++)
			{
			for(j=1;j<=c;j++)
				{
				if(c%j==0){
					l++ ;
						}
				
				}
			if (l==2)
				{
				printf("I will become a good boy.\n");
				l=0;
				}
			else{
				l=0;
				}
			}
				
		}	
		
	getchar();
	return 0;
}
