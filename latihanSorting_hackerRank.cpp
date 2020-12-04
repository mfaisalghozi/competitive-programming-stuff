#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int n, k ,i = 0, r = 0;
	scanf("%d %d", &n, &k);
	int prices[n+1], poss[n+1];
	for(int j=0;j<n;j++){
		scanf("%d", &prices[j]);
		if(prices[j]<=k){
			poss[i] = prices[j];
			r = r + poss[i];
			i++;
		}
	}
	if(r<k+1){
		printf(;
	}
	
	
	
	return 0;
}
