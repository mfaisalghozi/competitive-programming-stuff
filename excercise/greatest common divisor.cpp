#include <stdio.h>
int main(){
	int a,b,r;
	scanf("%d %d",&a,&b);
	int high,k;
	for(k=1;k<=a && k<=b;k++){
		if (a%k==0 && b%k==0){
			high = k;
		}
	}
	printf("%d",high);
	getchar();
	return 0;
}
