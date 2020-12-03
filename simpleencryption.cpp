#include <stdio.h>
#include <string.h>

void ubahhuruf(int a,int n,char s[1000]);

int main(){
	int t;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		int n;
		char s[1000],j[1000];
		scanf("%d",&n);getchar();
		do{
		scanf("%[^\n]",s);getchar();
		}while(strlen(s)>1000);
		ubahhuruf(a,n,s);
	}
	getchar();
	return 0;
}

void ubahhuruf(int a, int n,char s[1000]){
	
	for(int j=0;j<strlen(s);j++){
		
		if(s[j]>='a' && s[j]<='z'){
			s[j]=(s[j]-'a'+n)%26+'a';
		}
		else if(s[j]>='A' && s[j]<='Z'){
			s[j]=(s[j]-'A'+n)%26+'A';
		}
		
	}
	printf("Case #%d: %s\n",a+1,s);
}







