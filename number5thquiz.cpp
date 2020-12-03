#include <stdio.h>
int main(){
	int high,kecil,n,t,a1[100001],result[100001],boll[100001];
	do{
	scanf("%d",&t);
	}while(t<1 || t>10);
	for(int a=0;a<t;a++){
		do{
		scanf("%d",&n);
		}while(n<1 || n>100000);
		high=0;
		kecil=100000;
		for(int j=0;j<n;j++){
			do{
			scanf("%d",&a1[j]);
			}while(a1[j]<1 || a1[j]>100000);
			if(a1[j]>high){
				high=a1[j];
			}
			if(a1[j]<kecil){
				kecil=a1[j];
			}
		}
		for(int j=0;j<=high;j++){
			result[j]=0;
			boll[j]=0;
		}
		for(int k=0;k<n;k++){
			result[a1[k]]++;
		}
		printf("Case #%d:\n",a+1);
		for(int j=kecil;j<=high;j++){
			
			for(int k=0;k<n;k++){
				if(j==a1[k] && boll[j]<1 ){
				printf("%d %d\n",j,result[j]);
				boll[j]=1;
				}
			}
		}
	}
	
	
	
	getchar();
	return 0;
}
