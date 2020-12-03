#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
	int numb,angka[1001];
	scanf("%d",&numb);
	int high;
	high=0;
		for(int b=0;b<numb;b++){
		scanf("%d",&angka[b]);
			if(angka[b]>high){
				high=angka[b];
			}
		}
	int hasil[1001];
		for(int b=0;b<=high;b++){
			hasil[b]=0;
		}
		for(int b=0;b<numb;b++){
			for(int c=1;c<=high;c++){
				if(angka[b]%c==0){
				hasil[c]++;		
				}
			}
		}
		int high1;
		high1=0;
		for(int b=0;b<=high;b++){
			if(hasil[b]==numb){
				if(b>high1){
					high1=b;
				}
			}
		}
		printf("%d\n",high1);
	}
getchar();
return 0;
}
