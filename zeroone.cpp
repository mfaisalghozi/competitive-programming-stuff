#include <stdio.h>
int main(){
	int t,total1,total0;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
		int d,count1,count0;;
		scanf("%d",&d);
		char s[d+1];
		scanf("%s",s);
		count1=0,count0=0;
		total1=0,total0=0;
		for(int k=0;k<d;k++){
			if(s[k]=='1'){
				count1++;
				if(count1>total1){
					total1=count1;
				}
			}
			else{
				count1=0;
			}
			if(s[k]=='0'){
				count0++;
				if(count0>total0){
					total0=count0;
				}
			}
			else{
				count0=0;
				}	
			}
		if(total1 > total0){
			printf("Case #%d: 1 %d\n",j+1,total1);
		}
		else{
			printf("Case #%d: 0 %d\n",j+1,total0);
		}
		
	}
	
	
	
	
	
	getchar();
	return 0;
}
