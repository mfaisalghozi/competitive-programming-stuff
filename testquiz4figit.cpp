#include <stdio.h>
int main(){
	
	int c[10],z,a;
	int u,n,k,t;
	do{
	scanf("%d",&t);
	}while(t<1 || t>100);
	for(u=0;u<t;u++){
	do{
	scanf("%d",&n);
	}while(n<1 || n>1000000);
			for(int p=0;p<10;p++){
				c[p]=0;
			}
			for(k=1;k<=n;k++){
				int j=k;
				while (j!=0){
				z=j%10;
				for(int y=0;y<10;y++){
					if (z==y){
						c[y]++;
					}
				}
				j/=10; 
			}
		}
	printf ("Case #%d:",u+1);
		for(int h=0;h<10;h++){
		printf(" %d",c[h]);
		}
	printf("\n");
	}
	
	getchar();
	return 0;
}
