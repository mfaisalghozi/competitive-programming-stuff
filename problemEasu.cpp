#include <stdio.h>
#include <string.h>

int main() {
	
	char a[10],b[10],c[10];
	long long e,f,g;

	scanf("%[^1234567890]%lld%[^123567890]%lld%[^1234567890]%lld",a,&e,b,&f,c,&g);
	fflush(stdin);
	printf("%-11s%lld\n",a,e);
	printf("%-11s%lld\n",b,f);
	printf("%-11s%lld\n",c,g);
	
	
	getchar();
	return 0;
	
}
