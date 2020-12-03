#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	scanf("%d",&a);
	int len=(a*2)-1;
	for(int c=1;c<=(a*2)-1;c++){
		for(int d=1;d<=(a*2)-1;d++){
			int min = c < d ? c : d;
            min = min < len-c ? min : len-c-1;
            min = min < len-d-1 ? min : len-d-1;
            printf("%d ", a-min);
		}
	printf("\n");
	}
	
	
	
	
	
	getchar();
	return 0;
}
