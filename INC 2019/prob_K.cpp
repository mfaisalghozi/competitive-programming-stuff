#include <bits/stdc++.h>
#include <stdint.h>
int a[1000000];

int gcd(int a,int b){
	
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}


int main(){
	
	int n,max=0,max1=0,c=0;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++) {	
	
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
		}
	
	}
	int temp[max+1];
	for(int j=0;j<max+1;j++) temp[j]=0;
	
	for(int j=0;j<n;j++){
		for(int i=j+1;i<n;i++){
			

		}	
	}
	
	
	printf("%d\n",c);
	
	return 0;
}
