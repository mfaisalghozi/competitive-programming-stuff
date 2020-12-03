#include <stdio.h>

int findgcd(int a,int b);

int main(){
	
	int t,x,num[101];
	scanf("%d",&t);
	
	for(int l=0;l<t;l++){
		
	scanf("%d",&x);
		for(int d=0;d<x;d++){
			scanf("%d",&num[d]);
		}
	int r,max;
	max=0;
	for(int p1=0;p1<x-1;p1++){
		for(int p2=p1+1;p2<x;p2++){
			r=findgcd(num[p1],num[p2]);
			if(r>max){
				max=r;
				}		
			}	
		}
		
	printf("Case #%d: %d\n",l+1,max);
		
	}

	getchar();
	return 0;
}

int findgcd(int a,int b){
	
	if(a==0){
		return b;
	}
	return findgcd(b%a,a);
	
}


