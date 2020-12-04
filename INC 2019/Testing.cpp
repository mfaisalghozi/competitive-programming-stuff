#include <bits/stdc++.h>

int main(){
	
	int T,A[1000],B[1000];
	
	scanf("%d\n",&T);
	
	for(int i = 0 ; i < T ; i++){
		scanf("%d %d", &A[i], &B[i]);
	}
	
	for(int i = 0 ; i < T ; i++){
		printf("%d\n", A[i]+B[i]);
	}
	
	
	return 0;
}
