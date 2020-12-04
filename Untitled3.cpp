#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int m,n;
	int slot[256][256];
	
	scanf("%d %d", &m, &n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			slot[i][j] = 0;
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(slot[i][j-1] != slot[i][j] && slot[i][j+1]!=slot[i][j]){
				int ran = rand()%50;
				printf("%d ", ran);
				slot[i][j] = ran;
			}else{
				printf(". ");
				slot[i][j] = 0;
			}		
		}
	printf("\n");
	}
	
	
		
    return 0;
}
