#include <bits/stdc++.h>
#include <stdint.h>
int a[1000001];

int gcd(int a,int b){
	
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}


int main(){
	
	int n,max=0,max1=0,c=0;
	int a[30000];
	
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
			
			if(gcd(a[j],a[i])%2!=0){
				temp[gcd(a[j],a[i])]++;
	
				if(gcd(a[j],a[i])>=max1){
					max1=gcd(a[j],a[i]);
				}	
			}
		}	
	}

	
	printf("%d\n",temp[max1]);
	
	return 0;
}


