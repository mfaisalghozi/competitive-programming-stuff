#include <stdio.h>
int main(){
	int t,bn[1000],i;
	unsigned int n;
	do{
	scanf("%d",&t);
	}while(t<1 || t>1000);
	for(int a=0;a<t;a++){
	scanf("\n%lu",&n);
	i=0;
	while(n>0){
		bn[i]=n%2;
		n=n/2;
		i++;
	}
	printf("Case #%d: ",a+1);
	for(int j=0;j<i;j++){
	printf("%d",bn[j]);
	}
	printf("\n");		
}
	
	getchar();
	return 0;
}
