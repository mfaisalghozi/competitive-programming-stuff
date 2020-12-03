#include <stdio.h>
#include <string.h>

int main(){
	
	char a[35],b;
	
	scanf("%s",&a);
	for(b=0;b<30-strlen(a);b++){
		printf("0");
	}
	printf("%s\n",a);
	
	getchar();
	return 0;
}
