#include <stdio.h>
int cekangka(int a,int angka1,int angka2);


int main (){
	int t;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		int numb;
		scanf("%d",&numb);
		cekangka(numb,7,8);
		if(cekangka(numb,7,8)==1){
			printf("Case #%d: Yes\n",a+1);
		}
		else
			printf("Case #%d: No\n",a+1);
		}
	
	getchar();
	return 0;
}

int cekangka(int a,int angka1,int angka2){
	
	if(a%angka1==0||a%angka2==0){
		return 1;
	}
	
	if(a<angka1||a<angka2){
		return 0;
	}
	
	int x;
	x=0;
	
	x+= cekangka(a,(angka1*10)+7,(angka2*10)+8);
	x+= cekangka(a,(angka1*10)+8,(angka2*10)+7);
	
	return x;
}

