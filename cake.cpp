#include <stdio.h>

int main (){
	int a,row,col,t,r,c,count[101][101];
	char hehe[101][101];
	scanf("%d",&t);
	for(a=0;a<t;a++){
		scanf("%d %d",&r,&c);
		for(col=0;col<r;col++){
			for(row=0;row<c;row++){
				count[col][row] = 0;	
			}
		}
		for(col=0;col<r;col++){
			for(row=0;row<c;row++){
				scanf("%c",&hehe[col][row]);
				if(hehe[col][row]=='.'){
					count[col][row]=1;
				}
			}
		}
		int slide1,slide2,total,result1,result2;
		slide1=0;
		slide2=0;
		for(col=0;col<r;col++){
			total=0;
			for(row=0;row<c;row++){
			total=total+count[row][col];	
			}
			if(total==c){
				slide1++;
			}
			 
		}
			result1=r*slide1;
		
		
		printf("Case #%d: %d",a+1,total);
		
			
		
	}
	
	
	
	
	
	getchar();
	return 0;
}
