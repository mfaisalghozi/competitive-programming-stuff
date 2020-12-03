#include <stdio.h>
#include <string.h>

int main(){
	
	long long t;
	scanf("%lld",&t);
	for(int b=1;b<=t;b++){
		long long x;
		scanf("%lld",&x);
		int y=x;
		if(y==x){
			printf("Case #%d: integer\n",b);
		}
		else{
			printf("Case #%d: long long\n",b);
		}
	}

	getchar();
	return 0;
}
