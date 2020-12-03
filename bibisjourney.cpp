#include <stdio.h>
#include <string.h>
int main(){
	char a[11],b[11],c[11],d[11],e[11],f[11];
	scanf("%[^1234567890]%[^A-Z && a-z]%[^1234567890]%[^A-Z && a-z]%[^1234567890]%[^\n]",a,&b,c,&d,e,&f); 
	printf("%-11s%d\n%-11s%d\n%-11s%d\n",a,b,c,d,e,f);
	getchar();
	return 0;
} 
