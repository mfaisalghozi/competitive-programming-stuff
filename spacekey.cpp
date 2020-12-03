#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	int t;
	scanf("%d",&t);
	
	for(int k=0;k<t;k++){
		int n,space[n];
		scanf("%d\n",&n);
		char s[n];
		int c,total[n];
		scanf("%[^\n]",s);
		for(int p=0;p<n;p++){
			total[p]=0;
		}
		c=0;
		int b;
		b=0;
		for(int p=0;p<n;p++){
			if(s[p]==' '){
				c++;
				total[p]=c;
			}
			if(total[p]%2==1 && total[p]>0){
				b=1;
			}
			else if(total[p]%2==0 && total[p]>0){
				b=0;
			}
			total[p+1]=b;
		}
		for(int j=0;j<n;j++ ){
			/*
			if(total[j]==0){
			printf("%c",s[j]);
			}
			else if(isspace(s[j])){
			printf(".",s[j]);
			}
			*/
			printf("%d",total[j]);
		}
				
	}
	


	getchar();
	return 0;
}
