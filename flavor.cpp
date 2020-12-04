#include <stdio.h>
int main(){
	int t,c,s,v;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
		c=0,s=0,v=0;
		char p;
		int k;
		scanf("%d",&k);
		for(int h=0;h<k;h++){
		scanf("\n%c",&p);
		if(p=='c') c++;
		else if(p=='s') s++;
		else if(p=='v') v++;
		}
	
	printf("Case #%d:\n",j+1);
	if(c>=s && c>=v) printf("chocolate\n");
	if(s>=c && s>=v) printf("strawberry\n");
	if(v>=s && v>=c) printf("vanilla\n");
	}
	
	getchar();
	return 0;
}
