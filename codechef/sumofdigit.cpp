#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		int j,numb,z;
		z=0;
		scanf("%d",&numb);
		j=numb;
		int k;
			while(j!=0){
				k=j%10;
				z+=k;
				j/=10;
			}
		printf("%d\n",z);
		}
	getchar();
	return 0;
}
