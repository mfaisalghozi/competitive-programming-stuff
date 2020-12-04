#include <stdio.h>

int main(){
	
	long long t,a,n,nr,c1=0,c2=0;
	
	do{
	scanf("%lld",&t);
	}while(t<1 || t>100);
	long long z,h,total,totalr;
	 for(a=0;a<t;a++){
	 	do{
	 	scanf("%lld",&n);
	 	}while(n<1 || n>1000000000000000);
	 	c1=0;
	 	c2=0;
	 	nr=n;
	 	while(nr!=0){
	 		z=nr%10;
	 		c1=c1*10+z;
	 		nr/=10;
		 }
		total=n+c1;
		totalr=total;
		 while(totalr!=0){
		 	h=totalr%10;
		 	c2=c2*10+h;
		 	totalr/=10;
		 } 
		 printf("Case #%lld: %lld %lld %lld %lld\n",a+1,n,c1,total,c2);
	}
	 
	getchar();
	return 0;
}
