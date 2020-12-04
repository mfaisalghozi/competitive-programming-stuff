#include <stdio.h>

int main(){
	char temp,j[100],i[100],k[100];
	int b,a;
	scanf("%d",&b);
	for(a=0;a<b;a++){
		scanf("\n%c %c %c",&j[a],&i[a],&k[a]);
	}
	for(a=0;a<b;a++){
		
		if (j[a]>i[a]){
			temp=j[a];
			j[a]=i[a];
			i[a]=temp;
		}
		if (i[a]>k[a]){
			temp=i[a];
			i[a]=k[a];
			k[a]=temp;
		}
		if (j[a]>i[a]){
			temp=j[a];
			j[a]=i[a];
			i[a]=temp;
		}
		printf("Case #%d: %c %c %c\n",a+1,j[a],i[a],k[a]);
		
	}
	
	
	getchar();
	return 0;
}
