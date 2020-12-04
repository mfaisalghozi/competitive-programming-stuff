#include <stdio.h>
#include <string.h>

int main (){
	int t,L=0,B=0,n;
	char b[101];
	int c=0;
	do{
	scanf("%d",&t);
	}while(t<1 || t>100);
	for(int a=0;a<t;a++){
		do{
		scanf("%d",&n);
		}while(n<1||n>100);
		L=0;
		B=0;
		c=0;
		scanf("%s",b);
		while (b[c] !='\0'){
			if(b[c]=='L'){
				L++;
			}
			else if(b[c]=='B'){
				B++;
			}
		c++;
		}
		if(L>B){
		printf("Lili\n");
		}
		else if(B>L) {
		printf("Bibi\n");
		}
		else if(B==L) {
		printf("None\n");
		}
	}
	
	getchar();
	return 0;
}
