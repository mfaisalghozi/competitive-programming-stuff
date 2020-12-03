#include <stdio.h>
#include <string.h>

int main(){
	
	char huruf[101][101];
	int a[101];
	int j,x,p;
	int even,odd;
	
do{
	scanf("%d", &p);
	fflush(stdin);
	}while(p<1||p>100);
	
	for(x=0;x<p;x++){
		scanf("%d",&a[x]);
		scanf("%s",huruf[x]);
		}
		
	for(x=0;x<p;x++){
		even=0;
		odd=0;
		for(j=0;j<strlen(huruf[x]);j++) {
			if (huruf[x][j]%2==0){
				even++ ;
				}
			else if (huruf[x][j]%2==1){
				odd++ ;
				}
		}	
	printf("Odd group : %d integer(s).\n",odd);
	printf("Even group : %d integer(s).\n",even);
	}
	getchar();
	return 0;
}
