#include <stdio.h>

int main(){

	int T,a,N;
	scanf("%d",&T);
	for(a=0;a<T;a++){
		scanf("%d",&N);
		printf("Case #%d: %d\n",a+1,N/400+N/4-N/100);
	}
	getchar();
	return 0;
}
