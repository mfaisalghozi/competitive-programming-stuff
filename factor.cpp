#include <stdio.h>
int main(){
	int t,n;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		scanf("%d",&n);
		printf("Case #%d:\n",a+1);
		for(int k=1;k<=n;k++){
			int l=0;
			for(int j=1;j<=k;j++){
				if(k%j==0){
					l++;
				}	
			}
			int r1;
			r1=0;
			if (l==2){
				for(int i=1;i<=n;i++){
					if(i%k==0){
						int h1,h2;
						h1=i;
						h2=h1%k;
						while(h2==0){
							h1=h1/k;
							r1++;
							h2=h1%k;
						}
					}	
				}
			printf("%d %d\n",k,r1);
			l=0;
			}
			else{
			l=0;
			}			
		}
	}
	
	
	
	getchar();
	return 0;
}
