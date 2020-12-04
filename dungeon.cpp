#include <stdio.h>
int main(){
	int t,high,low;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		int n,e[1000],s;
		high=-1000000;
		low=1000000;
		scanf("%d",&n);
		for(int b=0;b<n;b++){
			scanf("%d",&e[b]);
			if(e[b]>high){
				high=e[b];
				s=b;
			}
			if(e[b]<low){
				low=e[b];
			}	
		}
		int c1,c2;
		c1=0,c2=0;
		for(int j=1;j<s;j++){
			if(e[j]!=low){
			c1=c1+e[j];
			}
		}
		for(int j=s+1;j<n-1;j++){
			if(e[j]!=low){
			c2=c2+e[j];
			}
		}
		if(c1<c2){
			printf("Case #%d: left\n",a+1);
		}
		else if(c1>c2){
			printf("Case #%d: right\n",a+1);
		}
		else if(c1==c2){
			printf("Case #%d: same\n",a+1);
		}
	}
	
	
	
	
	
	
	
	
	
	
	getchar();
	return 0;
}
