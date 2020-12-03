#include <stdio.h>

int main(){
	int t,n,q,a1[n],tot[q],a,total,j,numb1,numb2;
	scanf("%d",&t);
	for(a=0;a<t;a++){
		scanf("%d %d",&n,&q);
		for(int b=0;b<n;b++){
			scanf("%d",&a1[b]);
		}
		for(int b=0;b<q;b++){
			scanf("%d %d",&numb1,&numb2);
			total=0;
			for(j=numb1-1;j<numb2;j++){
				total=total+a1[j];
			}
			tot[b]=total;
		}
		for(int c=0;c<q;c++){
		printf("%d\n",tot[c]);
		}
	}
	
	getchar();
	return 0;
}
