#include <stdio.h>
int main(){
	int t,numb,banyak,high1,high2;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		high1=0;
		for(int b=0;b<3;b++){
			scanf("%d",&numb);
			if(numb>high1){
				high2=high1;
				high1=numb;
			}
			else if(numb>high2){
				high2=numb;
			}
		}
	printf("%d",high2);
		if(a<t){
			printf("\n");
		}
	}
	getchar();
	return 0;
}
