#include <stdio.h>

int main(){
	int n,n1,angka,ganjil=0,genap=0;
	scanf("%d",&n);
	if(n>=1 && n<=100){
	for(int i=0;i<n;i++){
		scanf("%d",&n1);
		if(n1>=1 && n<=1000){
		ganjil=0,genap=0;
		for(int j=0;j<n1;j++){
			scanf("%d",&angka);
			if(angka>=1 && angka<=1000){
			if(angka%2==1){
				ganjil++;
				}
			else{
				genap++;
				}
			}
		}
	}
		printf("Odd group : %d integer(s).\n",ganjil);
		printf("Even group : %d integer(s).\n\n",genap);
	}
	}
	getchar();
	return 0;
}
