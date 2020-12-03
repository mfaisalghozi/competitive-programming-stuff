#include<stdio.h>

void merge(int arr[],int kiri,int tengah,int kanan)
{
	
	int part1=tengah-kiri+1;
	int part2=kanan-tengah;
	int i,j,k;
	
	int L[part1],R[part2];
	
	for(int i=0;i<part1;i++)
	{
		L[i]=arr[kiri+i];
	}
	for(j=0;j<part2;j++)
	{
		R[j]=arr[tengah+1+j];
	}
	i=0,j=0,k=kiri;
	while(i<part1&&j<part2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}else
		{
			arr[k]=R[j];
			j++;
		}k++;
	}
	while(i<part1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<part2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}
void sort(int arr[],int kiri,int kanan)
{
	if(kiri<kanan)
	{
		int tengah=kiri+(kanan-kiri)/2;
		sort(arr,kiri,tengah);
		sort(arr,tengah+1,kanan);
		merge(arr,kiri,tengah,kanan);
	}
}
int people(int arr[],int size,int find)
{
	int awal=0,akhir=size,tengah=0;
	while(awal<akhir)
	{
		tengah=awal+(akhir-awal)/2;
		
		if(arr[tengah]==find)
		{
			while(arr [tengah+1] == find && tengah+1 <size)
			{
				tengah++;
			}break;
		}
		else if(arr[tengah]>find)
		{
			akhir=tengah;
		}
		else
		{
			awal=tengah+1;
		}		
	}
	while(tengah >= 0 && arr[tengah] > find)
	{
		tengah--;
	}return tengah+1;
}

int main()
{
	int jarak,p;
	scanf("%d %d",&jarak,&p);
	int jumlah[jarak],power;
	for(int i=0;i<jarak;i++)
	{
		scanf("%d",&jumlah[i]);
	}sort(jumlah,0,jarak-1);
	for(int i=0;i<p;i++)
	{
		scanf("%d",&power);
		printf("%d\n",people(jumlah,jarak,power));
	}
}
