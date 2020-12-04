#include<stdio.h>
int main(){
	int n,m,a1[100001],y[100001];
	scanf("%d %d",&n,&m);
	
	for(int l=0;l<n;l++){
		scanf("%d",&a1[l]);
	}
	int temp;
	for(int l=0;l<n-1;l++){
		for(int j=l;j<n;j++){
			if(a1[l]>a1[j]){
			temp=a1[l];
			a1[l]=a1[j];
			a1[j]=temp;
			}	
		}
	}
	for(int l=0;l<m;l++){
		scanf("%d",&y[l]);

	}
	
	for(int l=0;l<m;l++){
		printf("%d\n",a1[y[l]-1]);	
	}
	getchar();
	return 0;
}
