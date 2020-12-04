#include <stdio.h>
#include <string.h>
int main(){
	char s[101];
	int p[101];
	int t,q;
	long long sip,c;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		scanf("%s",s);
		q=0;
		for(int j=0;j<=strlen(s);j++){
			if(s[j]=='1'){
				p[q]=1;
				q++;
			}
			if(s[j]=='0'){
				p[q]=0;
				q++;
			}
			if(s[j]=='('){
				p[q]=-1;
				q++;
				j=j+3;
			}
		}
		c=1;
		sip=0;
		for(int j=q-1;j>=0;j--){
			sip+=p[j]*c;
			c=c*2;
			}
		printf("Case #%d: %lld\n",a+1,sip);
		
		}
	
	
	
	
	
	getchar();
	return 0;
}
