#include <stdio.h>
int main (){
	int t,n,count;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		scanf("%d",&n);
		count=0;
		for(int j=1;j<=n;j++){
			int r;
			r=n/j;
			if(j > r)break;
			if(n%j==0){
				if(j==r) count++;
				else count+=2;
			}
		}
		printf("Case #%d: %d\n",a+1,count);
		
	}
	// 100 000 000
	getchar();
	return 0;
}
