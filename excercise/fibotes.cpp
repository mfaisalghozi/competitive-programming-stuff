#include <stdio.h>

long long hitungfibo(long long n);

int main(){
	
	long long t,n;
	scanf("%d",&t);
	for(int l=0;l<t;l++){
		
		scanf("%lld",&n);
		printf("Case #%lld: %lld\n",l+1,hitungfibo(n));
		
	}
	
	getchar();
	return 0;
}


long long hitungfibo(long long n){
	
	
	long long temp,s1=1,s2=1,next,c,sum;
	if(n<2) return 1;
	else{
		sum=s1+s2;
		for(long long l=2;l<n;l++ ){
			temp=(s1+s2)%1000000009;
			sum=(sum+temp)%1000000009;
			s2=s1;
			s1=temp;
			
		}
		
		
		
	return sum;	
	}
	
}
