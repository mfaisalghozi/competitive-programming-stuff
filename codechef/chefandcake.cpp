#include <stdio.h>
int main(){
	int t,high;
	scanf("%d",&t);
	high=0;
	for(int a=0;a<t;a++){
	int numb;
	scanf("%d",&numb);
	int hasil;
		for(int b=1;b<=numb;b++){
		if(numb-b>high){
			high=numb-b;
			}	
			
			
			
		}
	printf("%d",high);
		
	}
	
	
	
	
	getchar();
	return 0;
}
