#include <stdio.h>
int main(){
	int t,x,y,z,m,n,p;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
	int r1,r2,ba;
	scanf("%d %d %d %d %d %d",&x, &y, &z, &m, &n, &p);	
	ba = (x+y-(n*y)-(m*x))/(n-m);
	r1 = m * (ba - x) +x +z;
	r2 = p * (ba+z);
	if(r1==r2){
		printf("Case #%d: YES\n",a+1);
		}
	else{
		printf("Case #%d: NO\n",a+1);
		}
	}	
	getchar();
	return 0;
}
