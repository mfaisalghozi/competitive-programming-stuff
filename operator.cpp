#include <stdio.h>
#include <string.h>

int main(){
	
	int g,h;
	char a,b,c;
	scanf("%d",&g);
	
	for(h=0;h<g;h++){
		scanf("\n%c %c %c",&a,&b,&c);
		printf("Case #%d:",h+1);
		if(a>b && a>c){
			if(b>c){
				printf("%c %c %c\n",a,b,c);
			}
			else if(c>b){
				printf("%c %c %c\n",a,c,b);
			}
		}
		if(b>a && b>c){
			if(a>c){
				printf("%c %c %c\n",b,a,c);
			}
			else if (c>a){
				printf("%c %c %c\n",b,c,a);
			}
			
		}		
		if(c>a && c>b) {
			if(a>b){
				printf("%c %c %c\n",c,a,b);
			}
			else if (b>a){
				printf("%c %c %c\n",c,b,a);
			}
		}
	}

	
	
	getchar();
	return 0;
}
