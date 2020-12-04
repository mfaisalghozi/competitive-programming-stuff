#include <stdio.h>
int main(){
	int t,b[101],r[101];
	scanf("%d",&t);
	for(int a=0;a<t;a++){
	scanf("%d",&b[a]);
	}
	for(int c=0;c<t;c++){
		r[c]=1;
		for(int j=1;j<=b[c];j++){
			r[c]*=j;
		}
	}
	for(int c=0;c<t;c++){
	printf("%d\n",r[c]);
	}
	getchar();
	return 0;
}
