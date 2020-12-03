#include <stdio.h>
#include <ctype.h>
void findgood(int a, char hem[81]);
int main(){
	int t,hasil;
	char hem[81];
	scanf("%d",&t);
	getchar();
	for(int a=0;a<t;a++){
		int ch,n=0;
		while ((ch = getchar()) != EOF && n < 81) {
      	hem[n] = ch;
    	++n;
  	 	}
	 	findgood(a,hem);
	}	
	getchar();
	return 0;
}

void findgood(int a, char hem[81]){
	int value;
	value=0;
	
	int count=0;
	char k;
	do{
		k=hem[count];
		count++;
	}while(k!='\0');
	
	for(int b=0;b<count;b++){
		if(tolower(hem[b])=='g'){
			if(tolower(hem[b+1])=='o'){
				if(tolower(hem[b+2])=='o'){
					if(tolower(hem[b+3])=='d'){
					value = 1;
					}		
				}
			}	
		}
	}
	printf("Case #%d: ",a+1);
	if(value==1){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}

}
