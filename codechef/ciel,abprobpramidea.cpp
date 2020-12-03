#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		int numb,angka[1000],k,hasil[1000];
		scanf("%d",&numb);
		for(int j=0;j<numb;j++){
			scanf("%d",&angka[j]);
		}
		scanf("%d",&k);
		hasil[k]=angka[k-1];
		for(int b=0;b<numb;b++){
			int temp;
			for(int d=b;d<numb;d++){
				if(angka[b]>angka[d]){
				temp=angka[b];
				angka[b]=angka[d];
				angka[d]=temp;
				}	
			}
		}
		for(int b=0;b<numb;b++){
			if(angka[b]==hasil[k]){
				printf("%d\n",b+1);
			}
		}
		
	}
	
	
	
	getchar();
	return 0;
}

