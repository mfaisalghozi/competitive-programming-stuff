#include <stdio.h>
#include <string.h>

int main(){
	int n,t , max, min, x;
	scanf("%d", &n);
	int arr[n+1];
	max=0;
	min=10000;
	x=0;
	for(int j=0;j<n;j++){
		scanf("%d", &arr[j]);
		x = x + arr[j];
		if(arr[j]>max){
			max = arr[j];
		}
		if(arr[j]<min){
			min = arr[j];
		}
	}
	t=0;
	for(int j=0;j<n;j++){
		for(int k=0;k<n;k++){
			if(arr[j] > arr[k]){
				t = arr[k];
				arr[k] = arr[j];
				arr[j] = t;		
			}
		}
	}
	for(int j=0;j<n;j++){
		printf("%d ", arr[j]);
	}
	printf("\n%d %d %d", max, min, x/n);
	return 0;
}
