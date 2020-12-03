#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		int numb;
		char s[1000];
		scanf("%d",&numb);
		do{
		scanf("%s",s);
		}while(strlen(s)>numb || strlen(s)<numb);
		int N,Y,I;
		N=0,Y=0,I=0;
		for(int b=0;b<numb;b++){
			if(s[b]=='N'){
				N++;
			}
			else if(s[b]=='Y'){
				Y++;
			}
			else if(s[b]=='I'){
				I++;
			}
		}
		if(N>0 && I>0 && Y<0){
			printf("INDIAN\n");
		}		
		else if(N>0 && Y>0 && I<0){
			printf("NOT INDIAN\n");
		}
		else if(N>0 && Y>0 && I>0){
			printf("NOT SURE\n");
		}
		else if( I>0 ){
			printf("INDIAN\n");
		}
		else if( Y>0 ){
			printf("NOT INDIAN\n");
		}
		else{
			printf("NOT SURE\n");
		}
		
	}
	
	getchar();
	return 0;
}
