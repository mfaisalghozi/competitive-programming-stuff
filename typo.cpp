#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
		int n;
		scanf("%d",&n);
		int numb[100];
		char let[100][100];
		for(int k=0;k<n+1;k++){
			scanf("%d",&numb[k]);
			do{
				scanf("%s",let[k]);
			}while(strlen(let[k])!=numb[k]);
		}
		int langka,sign,low;
		low=100;
		sign = 0;
		for(int p=0;p<n;p++){
			if(numb[n]<=numb[p]){
				for(int x=0;x<strlen(let[p]);x++){
					if(let[n][x]!=let[p][x]){
					sign++;
					}
				}
			}
			else{
				sign=numb[n];
			}
		if (sign<low){
			low=sign;
			}
		sign=0;				
		}
	if(low<=1 || low==0 ){
		printf("Case #%d: yes\n",j+1);
	}
	else{
		printf("Case #%d: no\n",j+1);
	}
	
		
		
	}
	
	getchar();
	return 0;
}
