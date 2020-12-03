#include <stdio.h>

int checksquare(int angka);

int main(){
	FILE *file;
	
	file=fopen("testdata.in","r");
	
	if(file==NULL){
		printf("Error Opening File");
	}
	
	int num[1000];
	int count;
	count=0;
	
	int r;
	r=0;
	
	while( count<1000 && fscanf(file,"%d",&num[count]) == 1 && num[count]<1000000 ) 
	{
	r=r+checksquare(num[count]);
	count++;	
	}
	
	
	printf("Special sum of %d datas is %d.\n",count,r);

	fclose(file);


	return 0;
}

int checksquare(int angka){	
	
	int i=1,result=1;
	while(result<=angka){
		i++;
		result = i*i;
	}
	
	int re;
	re=i-1;
	
	if(angka==(re*re)){
		return -1*angka;
	}
	else{
		return angka;
	}
	
}


