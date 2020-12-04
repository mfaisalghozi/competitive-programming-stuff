#include <stdio.h>

int main(){
	int a,n,a1[100000],odd=0,even=0;
	do{
	scanf("%d",&a);
	}while(a<1 || a>10);
	for(int b=0;b<a;b++){
		even=0;
		odd=0;
		do{
		scanf("%d",&n);
		}while(n<1 || n>100000);
		for(int d=0;d<n;d++){
			do{
			scanf("%d",&a1[d]);
			}while(a1[d]<-1000000 || a1[d]>1000000);
			if(d%2==0){
				if(a1[d]%2==0){
					even++;
				}
			}
			else if(d%2==1){
				if(a1[d]%2==1){
					odd++;
				}
				else if(a1[d]%2==-1){
					odd++;
				}	
			}
		}	
		if(even%2==0 && odd%2==1 ){
			printf("Case #%d: :|\n",b+1);
			}
		else if(even%2==0 && odd%2!=1 ){
			printf("Case #%d: :)\n",b+1);
			}
		else if(odd%2==1 && even%2!=0 ){
			printf("Case #%d: :(\n",b+1);
			}
		else if(even%2!=0 && odd%2!=1 ){
			printf("Case #%d: :|\n",b+1);
			}
					
	}
		
	getchar();
	return 0;
}
