#include <stdio.h>
 
int main()
{
	int num,bn[1000],n;
	scanf("%d",&num);
	int z,i=0;
	while(num>0){
		bn[i]=num%2;
		num=num/2;
		i++;
	}
	for (int j=0; j<i ; j++){
        printf("%d",bn[j]); 
	}




	 getchar();
  	return 0;
}
