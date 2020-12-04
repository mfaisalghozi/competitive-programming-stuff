#include <stdio.h>
void checkpattern (int n);

int main(){
	
	int t;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		int n;
		char w='A';
		scanf("%d",&n);
		printf("Case #%d: ",a+1);
		checkpattern(n);	
		printf("\n");
	}
	
	getchar();
	return 0;
}

void checkpattern(int n){
	if(n==1){
		printf("%c",'A');
	}
	else{
		checkpattern(n-1),printf("%c",('A'-1)+n),checkpattern(n-1);
	}	
}
