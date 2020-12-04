#include <stdio.h>
int main(){
	int t,numb[1000],r[1000],z,hasil[1000];
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		scanf("%d",&numb[a]);
	}
	for(int a=0;a<t;a++){
		r[a]=0;
		hasil[a]=0;
	}
	int j;
	for(int a=0;a<t;a++){
	j=numb[a];
		while(j!=0){
			z=j%10;
			r[a]=r[a]*10+z;
			j=j/10;
		}
	hasil[a]=(r[a]%10+numb[a]%10);	
	}
	for(int a=0;a<t;a++){
	printf("%d\n",hasil[a]);
	}	
	getchar();
	return 0;
}
