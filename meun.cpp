#include <stdio.h>
int main(){
	
	int n,m,num[100000];
	long long x1;
	
	scanf("%d %d",&n,&m);
	for(long long l=0;l<n;l++){
		scanf("%d",&num[l]);
	}
	int angka,count;
	
	for(long long p=0;p<m;p++){
		scanf("%d",&angka);
		count=0;
		for(long long p1=0;p1<n;p1++){
			if(angka==num[p1]) count++;
		}
		printf("%d\n",count);
	}
	
	getchar();
	return 0;
}
