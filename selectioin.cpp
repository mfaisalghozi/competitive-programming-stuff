#include <stdio.h>

int main(){
	int a[10],n;
	for(n=0;n<3;n++){
	do	{
	scanf("%d",&a[n]);
		}while(a[n]<0 || a[n]>4);
	}
	for(n=0;n<3;n++){
	if(a[n]==1){
		printf("I love fruit\n");
		}
	else if(a[n]==2){
		printf("I love vegetable\n");
		}
	else if(a[n]==3){
		printf("No comment\n");
		}
	}
	
	
	getchar();
	return 0;
}
