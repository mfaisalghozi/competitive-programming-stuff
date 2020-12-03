#include <stdio.h>

struct studentdata {
	int num;
	int  date;
	int month;
	int year;
	char name[20];
	char live[20];
}person[51];

int main(){
	
	int q,x[101],n;
//	do{
	scanf("%d",&n);
//	}while(n<1 || n>50);
	for(int a=0;a<n;a++){
		// do{
		scanf("%d %d %d %d %s %s",&person[a].num,
		&person[a].date,
		&person[a].month,
		&person[a].year,
		&person[a].name,
		&person[a].live);
	// 	}while( 
		
	//	( person[a].date<1 && person[a].date>31) 	   ||
	//	( person[a].month<1 && person[a].month>12) 	   ||
	//	( person[a].year<1000 && person[a].year>3000)  ||
	//	( person[a].num<1 && person[a].num>100)	
	//		);
			
	}
	
//	do{
	scanf("%d",&q);
//	}while(q<1  || q>100);
	for(int b=0;b<q;b++){
	//	do{
		scanf("%d",&x[b]);
	//	}while(x[b]<1 || x[b]>100);
	}
	
	int yes;
	for(int c1=0;c1<q;c1++){
	yes=0;
		for(int c=0;c<n;c++){
			if(x[c1]==person[c].num){
				printf("%d. %s was born on %d/%d/%d and live at %s\n",person[c].num,
				person[c].name,
				person[c].date,
				person[c].month,
				person[c].year,
				person[c].live);
				yes=1;
				break;
			}	
		}
		if(yes==0){
			printf("No data found!\n");
		}
	}


	getchar;
	return 0;
}

