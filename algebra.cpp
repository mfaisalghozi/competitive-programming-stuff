#include <stdio.h>

int main (){
	int a1,a2,a3;
	int b1,b2,b3;
	int t,a;
	float x,y;
	
	do{
	scanf("%d",&t);
	}while(t<1 || t>10);
	for(a=0;a<t;a++){
		do{
		scanf("%d %d %d",&a1,&a2,&a3);
		scanf("%d %d %d",&b1,&b2,&b3);
		}while( (a1<1) || (a2<1) || (a3<1) ||
				(b1<1) || (b2<1) || (b3<1) ||
				(a1>1000) || (a2>1000) || (a3>1000) ||
				(b1>1000) || (b2>1000) || (b3>1000) );		
		y=((float)a3*(float)b1-(float)a1*(float)b3)/((float)a2*(float)b1-(float)a1*(float)b2) ;
		x=(((float)b3-((float)b2*y))/(float)b1) ;
		printf("Case #%d:\nx = %.4f\ny = %.4f\n",a+1,x,y);
	}
	
	getchar();
	return 0;
}
