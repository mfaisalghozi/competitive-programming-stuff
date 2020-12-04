#include <stdio.h>
#include <math.h>

int main (){
	int t,a,x;
	float y[101];
	scanf("%d",&t);
	for(int b=0;b<t;b++){
		scanf("%d",&a);
		y[b]=sqrt((float)a);
	}
	for(int c=0;c<t;c++){
		printf("%d\n",(int)y[c]);
	}
	
	getchar;
	return 0;
}
