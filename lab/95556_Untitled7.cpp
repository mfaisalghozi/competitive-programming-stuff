#include<stdio.h>

int jumlah;
int fibo(int n, int m){
	if(n==m) jumlah++;
	if(n<=2) return 1;
	
	return fibo(n-1, m)+fibo(n-2, m);
}

int main(){
	
	jumlah=0;
	fibo(10,2);
	printf("%d", jumlah);
	
	return 0;
}
