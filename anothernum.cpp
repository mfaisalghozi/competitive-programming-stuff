#include <stdio.h>
int main(){
	int a,b,c,d,x;
	int t,z;
	scanf("%d",&t);
	
	for(int l=0;l<t;l++){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int re=0;

		for(long long x=0;x<=100000;x++){
		
			if(c==(a*x+b)%d){
				re=1;
				break;
			}			
		}
		
		if(re==1){
			printf("Case #%d: YES\n",l+1);
		}
		else{
			printf("Case #%d: NO\n",l+1);
		}

	}
	
	getchar();
	return 0;
}
