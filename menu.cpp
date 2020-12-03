#include<stdio.h>

struct harga
{
	int harga;
}menu[100005];

int main ()
{
	
	int n,q;
	int cek[100001],flag;
	scanf("%d %d",&n,&q); getchar();
	for (int i=0;i<n;i++)
	{
		scanf("%d",&menu[i].harga); getchar();
	}

	for(int i=0;i<q;i++)
	{
		scanf("%d",&cek[i]);
		getchar();
	}
	
	for (int i=0;i<q;i++)
	{
		flag=0;
		for(int j=0;j<n;j++)
		{
			if(cek[i]==menu[j].harga)
			{
				printf("%d\n",menu[j].harga);
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("0\n");
		}
	}
	
	
	return 0;
}
