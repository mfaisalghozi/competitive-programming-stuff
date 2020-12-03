#include <stdio.h>
int total(int a,int b);

int main(){
	int a,b,hasil;
	scanf("%d %d",&a,&b);
	hasil=total(a,b);	
	printf("%d\n",hasil);
	
	
	getchar();
	return 0;
}

int total(int a,int b){
	int angka[1001],z,tampung,line,result,count,n1,n2;
	n1=(a-b);
	n2=(a-b);
	count=0;
	line=0;
	while(n1!=0){
		n1=n1/10;
		line++;
	}
	tampung=line;
	while(n2!=0){
		z=n2%10;
		line--;
		angka[line]=z;
		n2=n2/10;
	}
	if(angka[0]>5){
		angka[0]--;
	}
	else{
		angka[0]++;
	}
	result=0;
	for(int j=0;j<tampung;j++){
		result=result*10+angka[j];
	}
	
	return result;
}
