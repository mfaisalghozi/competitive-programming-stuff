#include <stdio.h>


struct Name{
     int age;
     char name[30];
};

void clearArray(char *arr)
{
	for(int erase = 0;erase<30;erase++)
	{
		arr[erase] = '\0';
	}
}

int find(Name arr[], char *namefind)
{
	int result, flag, i;
	//printf("yg dicari -> %s \n", namefind);
	flag = 0;
	for (i=0;i<20;i++)	{
		for(int y=0; y<30 && arr[i].name[y]!=NULL;y++){			
			if (namefind[y]==arr[i].name[y]) flag=1;
			else {
				flag=0;
				break;
			}
		}		
		//printf("result %i %s-> %d\n", i, arr[i].name, flag);
		if(flag==1) return i;
	}
	
	return -1;
}

int main ()
{
	int N,Q,result;
	Name Data[20];
	char namefind[30];
	
	do{	
		scanf("%d", &N);
	}while (N>100 || N<1);
	
	for(int i=0;i<N;i++)
	{
		scanf(" %d",&Data[i].age);
		scanf(" %[^\n]",Data[i].name);
		//printf("%s %d \n", Data[i].name, Data[i].age);
	}
	
	do{	
		scanf("%d", &Q);
	}while (Q>100 || Q<1);
	
	for(int i=0;i<Q;i++)
	{
		result = -1;
		clearArray(namefind);
		scanf(" %[^\n]",namefind);
		result = find(Data,namefind);
		//printf("%d\n", result);
		if(result!=-1)printf("%d\n", Data[result].age);
		else printf("%d\n", result);
	}
	
	return 0;
}

