#include <stdio.h>
int main(){
	int t,num1,num2;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		scanf("%d %d",&num1,&num2);
		int p;
		p=0;
		for(int b=num1;b<=num2;b++){
			for(int c=num1;c<=b;c++){
				if(b%c==0){
					p++;
				}	
				
			}	
			if(p==2){
				printf("%d\n",b);
				p=0;
			}
			else{
				p=0;
			}
		}
		
	}
	
	
	
	
	
	getchar();
	return 0;
}
