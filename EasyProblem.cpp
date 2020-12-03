#include <stdio.h>

int main(){
	
	int N,T,count;
	do{
	scanf("%d",&N);
	fflush(stdin);
	}while(N<1 || N>100);
	count=0;
	for(int i=0;i<N; i++){
		do{
		scanf("%d",&T);
		fflush(stdin);
		}while(T<0 || T>1);
		if(T==1){
			count++ ;
		}
	}
	if(count>0){
		printf("not easy\n");
	}
	else{
		printf("easy\n");
	}
	
	getchar();
	return 0;
}
