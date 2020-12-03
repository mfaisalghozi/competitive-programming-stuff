#include <stdio.h>
#include <math.h>


int main(){
	
	int a[10],b;
	
	scanf("%d",&a[0]);
	scanf("%d",&a[1]);
	scanf("%d",&a[2]);
	
	for(b=0;b<3;b++){
		if(a[b]>=1  && a[b]<=998 && a[b]/999==0){
			if ( a[b]%111==0 ){
				printf("%.1f...\n",(float)((int)(((float)a[b]/999)*10))/10.0);
			}
			else{
				printf("%.3f...\n",(float)((int)(((float)a[b]/999)*1000))/1000.000);
			}
		}
		
	
	}
	
	getchar();
	return 0;
}
