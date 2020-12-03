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
	scanf("%d",&n);
	for(int a=0;a<n;a++){
		scanf("%d %d %d %d %s %s",&person[a].num,
		&person[a].date,
		&person[a].month,
		&person[a].year,
		&person[a].name,
		&person[a].live);
			
	}
	
	scanf("%d",&q);
	for(int b=0;b<q;b++){
		scanf("%d",&x[b]);
	}
	
	int yes;
	for(int c1=1;c1<=q;c1++){
	yes=0;
		for(int c=0;c<n;c++){
			if(c1==person[c].num){
				printf("%d. %s was born on %d/%d/%d and live at %s\n",person[c].num,
				person[c].name,
				person[c].date,
				person[c].month,
				person[c].year,
				person[c].live);
				yes=1;
			}	
		}
		if(yes==0){
			printf("No data found!\n");
		}
	}


	getchar;
	return 0;
}

