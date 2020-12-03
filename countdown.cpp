#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		int c;
		scanf("%d",&c);
		printf("Case #%d:\n",a+1);
		for(int j=c;j>=1;j--){
			if(j==5 || j==10 || j==30 || j==60 || j==c){
				printf("%d SECONDS TILL NEW YEAR!!\n",j);
			}
			else{
				printf("%d\n",j);
			}
		}
	}
	
	getchar();
	return 0;
}
