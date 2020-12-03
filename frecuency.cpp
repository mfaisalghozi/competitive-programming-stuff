#include <stdio.h>
#include <string.h>

int main(){
	FILE *file=fopen("testdata.in","r");
	
	int t,num[27];
	char huruf[1001];
	
	fscanf(file,"%d",&t);
	for(int a=0;a<t;a++){
	fscanf(file,"\n%[^\n]",huruf);
	
		for(int ber=0;ber<26;ber++){
			num[ber]=0;
		}
		
		for(int cek=0;cek<strlen(huruf);cek++){
			
			for(char hur='A';hur<='Z';hur++){
				if(huruf[cek]==hur){
					num[hur-'A']++;
					break;
				}	
			}
			
			for(char hur='a';hur<='z';hur++){
				if(huruf[cek]==hur){
					num[hur-'a']++;
					break;
				}
			}	
		}
		printf("Case #%d:\n",a+1);
		for(char h1='A';h1<='Z';h1++){
			printf("%c : %d",h1,num[h1-'A']);
			
			if(((h1-'A')+1)%5==0 || h1=='Z'){
				printf("\n");
			}else{
				printf(", ");
			}
		}
	printf("\n");
	}
	
	fclose(file);
	
	
	return 0;
}
