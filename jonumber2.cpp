#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		int numb;
		scanf("%d",&numb);
		for(int b=1;b<=numb;b++){
			int z,r,betul,c;
			z=b;
			betul=0,c=0;
			while(z!=0){
				r=z%10;
				if(r==7 || r==8){
					betul++;
				}
				c++;
				z=z/10;
			}
		if(c==betul){
			if(numb%b==0){
				printf("Case #%d: Yes\n",a+1);
				break;
			}
		}
		else if(b==numb){
			printf("Case #%d: No\n",a+1);
			}
		}
	}
	
	
	
	
	
}
