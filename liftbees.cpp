
#include <stdio.h>

int main(){
	int t,n,a,numb,count[101],total=0;
	scanf("%d",&t);
	for(a=0;a<t;a++){
		scanf("%d",&n);
			
			for(int k=0;k<100;k++){
			count[k]=0;
			}
			
			for(int b=0;b<n;b++){
				scanf("%d",&numb);
				if(count[numb-2]==0 && count[numb]==0 ){
					count[numb-1]=1;
					}
			}		
		
			total=0;
			
			for(int c=0;c<18;c++){
			total=total+count[c];
			}
			printf("Case #%d: %d\n",a+1,total);
		
		}
	
	
	
	getchar();
	return 0;
}
