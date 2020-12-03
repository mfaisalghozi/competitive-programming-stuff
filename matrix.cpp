
#include <stdio.h>

int main(){
	
	int t,n,a1[101][101];
	int high;
	int a,c,r;
	scanf("%d", &t);
	for(a=0;a<t;a++){
		scanf("%d", &n);

			for(c=0;c<n;c++){
				for(r=0;r<n;r++){
					scanf("%d", &a1[c][r]);
				}		
			}
			
			printf("Case #%d:\n",a+1);
			printf("Row :");
			
			for(c=0;c<n;c++){
				high=-127;
				for(r=0;r<n;r++){
					if(a1[c][r]>high){
						high = a1[c][r] ;
					}
				}
				printf(" %d",high);
		 	}
		 	printf("\nCol :");
		 	
			for(c=0;c<n;c++){
				high=-127;
				for(r=0;r<n;r++){
					if(a1[r][c]>high){
						high = a1[r][c] ;
					}
				}
				printf(" %d", high);
			}
			printf("\n");
		
		}
	getchar();
	return 0;
}
