#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
		int m;
		scanf("%d",&m);
		int hour,minute;
		hour=m/60;
		minute=m-(hour*60);
		printf("Case #%d: %d%d:%d%d\n",j+1,hour/10,hour%10,minute/10,minute%10);	
	}
	getchar();
	return 0;
}
