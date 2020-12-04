#include <stdio.h>
int main (){
	
	int t,n,m,a1,b,y,high=0,low=1000000000;
	scanf("%d",&t);
	for(b=0;b<t;b++){
		scanf("%d %d",&n,&m);
		low=1000000000,high=0;
		for(int c=0;c<n;c++){
			scanf("%d",&a1);
			if (a1<low){
				low=a1;
			}
			if(a1>high){
				high=a1;
			}
		}
		y=high-low;
		if ( y > m){
			printf("Case #%d: NO\n",b+1);
		}
		else if ( y < m){
			printf("Case #%d: YES\n",b+1);
		}	
	}
	getchar();
	return 0;
}
