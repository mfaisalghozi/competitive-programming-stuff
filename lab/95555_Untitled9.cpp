#include<stdio.h>

int main(){
	FILE *file = fopen("asd.txt", "r");
	int hitung;
	int sum=0;
	
	while(!feof(file)){
		int a=0;
		fscanf(file, "%d ", &a);
		printf("%d\n",a);
		if(a!=0) hitung++;
		sum+=a;
	}
	printf("%d %d %d", hitung, sum, sum/hitung);
	return 0;
}
