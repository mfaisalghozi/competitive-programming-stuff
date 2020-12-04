#include <stdio.h>

int main(){
	int t,n,q,a,angka1,angka2,i,j,total;
	
	scanf("%d",&t);
	
	for(a=0;a<t;a++){	
		scanf("%d %d",&n,&q);		
		int angka[n];
		for(i=0;i<n;i++){	
			scanf("%d",&angka[i]);
				}
		for(i=0;i<q;i++){
			total=0;	
			scanf("%d %d",&angka1,&angka2);
			for(j=angka1;j<=angka2;j++){
				total=total+angka[j-1];
				}
			printf("%d\n",total);
			}
		}

	
	getchar();
	return 0;
}
