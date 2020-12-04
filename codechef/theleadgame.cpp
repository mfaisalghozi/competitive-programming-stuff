#include <stdio.h>

int main (){
	
	int winplayer,player1[101],player2[101],t,total[101],total1[101],total2[101],tambah1,tambah2;
	scanf("%d",&t);
	tambah1=0,tambah2=0;
	int high;
	high=0;
	for(int a=0;a<t;a++){
		scanf("%d %d",&player1[a],&player2[a]);
		tambah1=tambah1+player1[a];
		total1[a]=tambah1;
		tambah2=tambah2+player2[a];
		total2[a]=tambah2;
		total[a]=tambah1-tambah2;
		if (total[a]<0){
			total[a]=total[a]*-1;
		}
		if (total[a]>high){
			high = total[a];
		}	
	}
	for(int c=0;c<t;c++){
		if (high==total1[c]-total2[c] || high==total2[c]-total1[c]){
			if (total1[c]>total2[c]){
				winplayer = 1;
			}
			else {
				winplayer = 2;
				}
			}
	}
	printf("%d %d\n",winplayer,high);
	
	
	
	
	getchar();
	return 0;
}
