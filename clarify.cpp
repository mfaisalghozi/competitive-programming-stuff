#include <stdio.h>

int main(){
	int n,b,c;
	int tc,ts,tv;
	do{
	scanf("%d",&n);
	}while (n<1 || n>100000);
	c=0;
	for(b=0;b<n;b++){
		do{
		scanf("%d %d %d",&tc,&ts,&tv);
		}while(tc<0 || (tv<tc) || (tv>300) || (ts<0)|| (ts>300) || (tv<0) || (tc>300));
			if(ts>tv)
			{
				c++;
			}
	}
	printf("%d\n",c);
		
	getchar();
	return 0;
}
