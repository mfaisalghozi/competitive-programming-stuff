#include <stdio.h>

int main(){
	int a,n,b;
	
	do{
	scanf("%d",&b);
	}while(b<0 || b>30);
	n=1;
	for(a=1;a<=b;a++){
		n=n*2+1;
	}
	printf("%d\n",n);
	
	getchar();
	return 0;
}
