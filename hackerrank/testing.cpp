#include <stdio.h>
#include <string.h>
int main(){	
	int t,c,angka[1001],bolnumb[1001];
	char w[1001];
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		scanf("\n%[^\n]",w);
		c=0;
		for(int j=0;j<strlen(w);j++){
			angka[j]=0;
			bolnumb[j]=0;
		}
		for(int b=0;b<strlen(w);b++){
			if(w[b]!=w[b-1]){
				c++;
			bolnumb[b]=1;
			}
		angka[c-1]++;	
		}
		for(int j=0;j<strlen(w);j++){
			
		printf("%d",bolnumb[j]);

		}
		printf("\n");
		for(int j=0;j<strlen(w);j++){
			
		printf("%d",angka[j]);

		}
	}
	
	
	
	getchar();
	return 0;
}
