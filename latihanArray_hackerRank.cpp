#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int n, d, m;
	scanf("%d %d", &n, &d);
	int a[n+1],r[n+1];
	for(int j=0;j<n;j++){
		scanf("%d", &a[j]);
	}
	m=0;
	for(int j=0;j<n;j++){
		if(n>d){
			r[j] = a[d];
			d++;
		}else{
			r[j] = a[m];
			m++;
		}
	}
	for(int j=0;j<n;j++){
		printf("%d ", r[j]);
	}
	
	
	return 0;
}
