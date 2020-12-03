#include <stdio.h>

int main (){
	int t,n,m=1000000007;
	long long a1[101][101],b1[101][101];
	scanf("%d",&t);
	for (int a=0;a<t;a++){
		scanf("%d",&n);
		int row,col;
		for(row=0;row<n;row++){
			for(col=0;col<n;col++){
				scanf("%lld",&a1[row][col]);
				b1[row][col]=a1[row][col];
			}
		}
		long long sum, result[101][101];
		for(int i=0;i<n-1;i++){
			for(int c=0;c<n;c++){
				for(int d=0;d<n;d++){
					sum=0;
					for(int k=0;k<n;k++){
					sum = sum + ((a1[c][k]%m)*(b1[k][d]%m))%m;	
					}
					result[c][d] = sum;
				}
			}
			for(int c=0;c<n;c++){
				for(int d=0;d<n;d++){
					a1[c][d] = result[c][d];
					result[c][d] = 0;
				}
			}
		}
		printf("Case #%d:\n",a+1);
		for(row=0;row<n;row++){
			for(col=0;col<n;col++){
				printf("%lld",a1[row][col]%m);
				if(col<n-1){
					printf(" ");
				}
				else{
					printf("\n");
				}
			}
		}		
	}
	
	
	
	getchar;
	return 0; 
}
