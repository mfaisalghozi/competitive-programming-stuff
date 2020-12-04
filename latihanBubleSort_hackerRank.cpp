#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int n, t, c;
	scanf("%d", &n);
	int a[n+1];
	for(int j=0;j<n;j++){
		scanf("%d", &a[j]);
	}
	c=0;
	for(int j=0;j<n;j++){
		for(int i=0;i<n-1;i++){
			if(a[i]>a[i+1]){
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
				c++;
			}
		}
	}
	
	printf("Array is sorted in %d swaps.\n", c);		
	printf("First Element: %d\n", a[0]);
	printf("Last Element: %d", a[n-1]);
	
	return 0;
}
