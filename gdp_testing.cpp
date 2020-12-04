#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
	
	long n, div, rad, a=0,r;
	long long int t;
	int length;
	char s[101];
	scanf("%s", &s);
	scanf("%lld", &t);
	n = (long) t;
	length = strlen(s);
	for(int j=0;j<length;j++){
		if(s[j]=='a') a++;
	}
	if(a==1 && length==1){
		printf("%lld", t);
	}else{
		div = n/(long) length;
		rad = n%(long) length;
		r = a*div;
		do{
			if(s[rad-1] == 'a') r++;
			rad--;
		}while(rad>0);
		printf("%ld", r);
	}

	
	
	

	
    return 0;
}


