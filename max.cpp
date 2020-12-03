#include <stdio.h>
int maksimum (int a,int b);
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("maks = %d",maksimum(a,b));
	
	getchar();
	return 0;
}

int maksimum (int a,int b){
	int max;
	max=a;
	if(b>max){
		max=b;
	}
	return max;
}
