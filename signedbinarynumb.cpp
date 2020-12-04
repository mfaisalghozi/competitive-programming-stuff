#include <stdio.h>
#include <string.h>
int main(){
	int t;
	char s[33];
	do{
	scanf("%d",&t);
	}while(t<1|| t>10);
	for(int a=0;a<t;a++){
		do{
		scanf("%s",s);
		}while(strlen(s)<1 || strlen(s)>32);
		int baris,count1,count2;
		baris = strlen(s);
			count1=0;
			count2=0;
			for(int b=0;b<baris;b++){
				if(s[b]=='(' && s[b+1]=='-' && s[b+2]=='1' && s[b+3]==')'){
					for(int j=b+3;j<baris;j++){
						if(s[j]=='0'){
							count1++;
						}
					}					
				}
				if (s[b]=='1' && s[b-1]!='-'){
					for(int k=b;k<baris;k++){
						if(s[k]=='0'){
							count2++;
						}
						else if(s[k]=='(' && s[k+1]=='-' && s[k+2]=='1' && s[k+3]==')'){
							count2++;
						}
					}
				
				}	
			}
			long long hasil1,hasil2;
			hasil1 = 1,hasil2 = 1;
			for(int k=0;k<count1;k++){
				hasil1 = hasil1 * 2;
			}
			for(int k=0;k<count2;k++){
				hasil2 = hasil2 * 2;
			}
			printf("Case #%d: %lld\n",a+1,hasil2-hasil1);
		}
	getchar();
	return 0;
}
