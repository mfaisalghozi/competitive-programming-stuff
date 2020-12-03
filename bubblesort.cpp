#include <stdio.h>
#include <string.h>

int main(){
	
	int data[100],i,j,temp,step;
	
	scanf("%d",&i);
	fflush(stdin);
	for(j=0;j<i;j++){
		scanf("%d",&data[j]);
		fflush(stdin);
	}
	for(step=0;step<i-1;step++)
	{
		for(j=0;j<i-step-1;j++)
		{
			if(data[j]>data[j+1])
			{
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}		
		}	
	}
	for(j=0;j<i;j++){
		printf("%d\n",data[j]);
	}
	
	getchar();
	return 0;
}
