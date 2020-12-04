#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void swap(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = (low - 1);
	
	for(int j=low; j<=high-1;j++){
		if(arr[j]<pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return (i+1);
}

void quickSort(int arr[], int low, int high){
	if(low<high){
		int pi = partition(arr, low, high);
		
		quickSort(arr, low, pi-1);
		quickSort(arr, pi+1, high);
	}
}


int main(){
	
	int n, k, d;
	scanf("%d %d", &n, &k);
	int prices[n+1];
	int i=0, r=0;
	for(int j=0;j<n;j++){
		scanf("%d", &d);
		if(d<=k){
			prices[i] = d;
			r=r+d;
			i++;
		}
	}
	
	for(int kk=0;kk<i;kk++){
		printf("%d ", prices[kk]);
	}
	printf("\n");
	
	int l = sizeof(prices)/sizeof(prices[0]);
	quickSort(prices, 0, l-1);
	int ik; 
    for (ik=0; ik < i; ik++) 
        printf("%d ", prices[ik]); 
    printf("\n"); 
	
//	if(r<=k){
//		printf("%d", i);
//	}else{
//		//sorting
//		
//		
//		
//	}
	
	
	
	return 0;
}


