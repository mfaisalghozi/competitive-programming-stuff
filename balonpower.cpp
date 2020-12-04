#include <stdio.h>

int main(){
	
	unsigned int n,p,c;
	do{
	scanf("%u %u",&n,&p);
	}while (n<1 || (n>100000) || (p<0) || (p>1000000000));
	unsigned int balon[1000000];
	c=0;
	for(int a=0;a<n;a++){
		do{
		scanf("%u",&balon[a]);
		}while(balon[a]<0 || balon[a]>1000000000);
		if(balon[a]<p){
			c++;
		}
	}
	printf("%u\n",c);
	
	getchar();
	return 0;
}
