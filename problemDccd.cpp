#include <stdio.h>

int main() {
	
	char a[10],b[10],c[10];
	long long e,f,g;

	scanf("%[^1234567890]%lld%[^123567890]%lld%[^1234567890]%lld",a,&e,b,&f,c,&g);
	printf("%-11s%lld\n%-11s%lld\n%-11s%lld",a,e,b,f,c,g);
	
	return 0;
	
}
