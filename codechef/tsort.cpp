#include <stdio.h>
int main(){
	int a,e[100],temp,b,c;
	scanf("%d",&a);
	for(int j=0;j<a;j++){
		scanf("%d",&e[j]);
	}
	for(int b=0;b<a;b++){
		for(int c=b;c<a;c++){
			if(e[b]>e[c]){
			temp=e[b];
			e[b]=e[c];
			e[c]= temp;
			}
		}
	}
	for(int j=0;j<a;j++){
		printf("%d\n",e[j]);
	}	
	return 0;
}
