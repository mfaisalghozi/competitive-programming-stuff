#include<stdio.h>
int main(){
	
	int t,n,x,y;
	scanf("%d",&t);
	int first,second,third,fourth,nothing;
	for(int l=0;l<t;l++){
	scanf("%d",&n);
	first=0,second=0,third=0,fourth=0,nothing=0;
		for(int p=0;p<n;p++){
			scanf("%d %d",&x,&y);

			if(x>=0 && y>=0) first++;
			else if(x<=0 && y>=0) second++;
			else if(x>=0 && y<=0) third++;
			else if(x<=0 && y<=0) fourth++;
			
		}
		int yes;
		yes=0;
		first=first-1
			
			if ( n-1 == first ) yes=1;
			else if( n-1 == second ) yes=1;
			else if( n-1==third ) yes=1;
			else if( n-1==fourth ) yes=1;
			
		
		second=second-1
			
			if ( n-1 == second ) yes=1;
			else if( n-1 == first ) yes=1;
			else if( n-1==third ) yes=1;
			else if( n-1==fourth ) yes=1;
			
		
		third=third-1
			
			if ( n-1 == third ) yes=1;
			else if( n-1 == second ) yes=1;
			else if( n-1==first ) yes=1;
			else if( n-1==fourth ) yes=1;
			
		
		fourth=fourth-1
			
			if ( n-1 == first+1 ) yes=1;
			else if( n-1 == second ) yes=1;
			else if( n-1==third ) yes=1;
			else if( n-1==fourth ) yes=1;
			
		
		
		
		if(yes==1) printf("YES\n");
		else printf("NO\n");
		
	}
	
	getchar();
	return 0;
}
