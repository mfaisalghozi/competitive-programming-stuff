#include <stdio.h>

int main(){
	long long n,a1,b1,r1,r2,low,high;
	do{
	scanf("%lld",&n);
	}while(n<1 || n>100000);
	low = 1;
	high = 1000000000;
	for(int a=0;a<n;a++){
		scanf("%lld %lld",&a1,&b1);
		if(a1>=1 && a1<=1000000000 && b1>=0 && b1<=1){
		if(b1==1){
			if(a1<high){
				high=a1;
			}
		}
		else{
			if(a1>low){
				low=a1+1;
				}
			}
		}
	}
	printf("%lld %lld\n",low,high);
	
	getchar();
	return 0;
}
