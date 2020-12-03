#include <stdio.h>
#include <string.h>
int main (){
	int t;
	do{
	scanf("%d",&t);
	}while(t<1 || t>100);
	for(int j=0;j<t;j++){
		long long k,numb,c,m,h,p;
		do{
		scanf("%lld",&numb);
		}while(numb<1 || numb>1000000000000000);
		p=numb;
		printf("Case #%d: %lld",j+1,numb);
		if (numb>10){
			do{
			printf(" ");
			h=0;
				while(p!=0){
					m=p%10;
					h=h+m;
					p=p/10;
				}
			k=h;
			p=h;
			printf("%lld",p);
			if(k<10){
				printf("\n");
			}
			}while(k>10);		
		}
		else{
			printf("\n");
		}
	}	
	getchar();
	return 0;
}
