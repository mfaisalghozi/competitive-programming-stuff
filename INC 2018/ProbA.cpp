#include <bits/stdc++.h>
#include <string.h>

int main(){
	
	int n,a[102],x1,x2,zero=0,total=0,temp1=0,temp2=0;;
	char d1[10],d2[10];
	
	scanf("%d",&n);
	if(n<=100 && n>=1){
		for(int i=0;i<n;i++){
			do{
			scanf("%d",&a[i]);
			total=total+a[i];
			if(a[i]==0){
				zero++;
			 }
			}while(a[i]>60 || a[i]<0);
		}
		do{
			do{
			scanf("%d %s",&x1,d1);
			}while(strcmp(d1,"right")!=0 && strcmp(d1,"left")!=0);
		}while(x1>n || x1<1 );
		
			for(int j=0;j<x1-1;j++){
			temp1=temp1+a[j];
			//printf("%d %d\n",temp1,a[j]);	
			}
		do{
			do{
			scanf("%d %s",&x2,d2);
			}while(strcmp(d2,"right")!=0 && strcmp(d2,"left")!=0);
		}while(x2>n || x2<1);
			for(int j=0;j<x2-1;j++){
				if(a[j]==0){
					temp2++;
				}
			}
		if(strcmp("right",d1)==0){
			total=total-temp1;
			temp1=total;
		}else{
			temp1=temp1+a[x1-1];
		}
		
		if(strcmp("right",d2)==0){
			zero=zero-temp2;
			temp2=zero;
		}else{
			if(a[x2-1]==0){
				temp2++;
			}
		}
		printf("%d %d\n",temp1,temp2);		
	}
	 
	
	return 0;
}
