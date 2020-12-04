#include<stdio.h>
#include<string.h>

#define rep(i,a,n) for(int i=a;i<=n;i++)
#define rev(i,n) for(int i=n;i>=1;i--)
#define cas(i) printf("Case #%d:\n",i)

bool dead[15][15];
char chess[15][15];
void print()
{
	rev(i,8)
	{
		rep(j,1,8)
		{
			if(dead[i][j])
			{
				printf("%c %d\n",'A'+j-1,i);
			}
		}
	}
}
void pawn(int i, int j)
{
	if((i+1<=8 && j-1>=1) && (chess[i+1][j-1]>='a' && chess[i+1][j-1]<='z')) dead[i+1][j-1]=1;
	if((i+1<=8 && j+1<=8) && (chess[i+1][j+1]>='a' && chess[i+1][j+1]<='z')) dead[i+1][j+1]=1;
}

void rook(int i, int j)
{
	rep(k,i+1,8)
	{
		if(chess[k][j]>='A' && chess[k][j]<='Z') break;
		if(chess[k][j]>='a' && chess[k][j]<='z') 
		{
			dead[k][j]=1;
			break;
		}
	}
	rev(k,i-1)
	{
		if(chess[k][j]>='A' && chess[k][j]<='Z') break;
		if(chess[k][j]>='a' && chess[k][j]<='z')
		{
			dead[k][j]=1;
			break;
		}
	}
	rep(k,j+1,8)
	{
		if(chess[i][k]>='A' && chess[i][k]<='Z') break;
		if(chess[i][k]>='a' && chess[i][k]<='z') 
		{
			dead[i][k]=1;
			break;
		}
	}
	rev(k,j-1)
	{
		if(chess[i][k]>='A' && chess[i][k]<='Z') break;
		if(chess[i][k]>='a' && chess[i][k]<='z')
		{
			dead[i][k]=1;
			break;
		}
	}
}

void bishop(int i, int j)
{
	for(int k=i+1, l=j+1; k<=8 && l<=8;k++,l++)
	{
		if(chess[k][l]>='A' && chess[k][l]<='Z') break;
		if(chess[k][l]>='a' && chess[k][l]<='z')
		{
			dead[k][l]=1;
			break;
		}
	}
	for(int k=i+1, l=j-1; k<=8 && l>=1;k++,l--)
	{
		if(chess[k][l]>='A' && chess[k][l]<='Z') break;
		if(chess[k][l]>='a' && chess[k][l]<='z')
		{
			dead[k][l]=1;
			break;
		}
	}
	for(int k=i-1, l=j-1; k>=1 && l>=1;k--,l--)
	{
		if(chess[k][l]>='A' && chess[k][l]<='Z') break;
		if(chess[k][l]>='a' && chess[k][l]<='z')
		{
			dead[k][l]=1;
			break;
		}
	}
	for(int k=i-1, l=j+1; k>=1 && l<=8;k--,l++)
	{
		if(chess[k][l]>='A' && chess[k][l]<='Z') break;
		if(chess[k][l]>='a' && chess[k][l]<='z')
		{
			dead[k][l]=1;
			break;
		}
	}
}

void queen(int i, int j)
{
	rook(i,j);
	bishop(i,j);
}

void king(int i, int j)
{
	if(i+1<=8 && (chess[i+1][j]>='a' && chess[i+1][j]<='z')) dead[i+1][j]=1;
	if((i+1<=8 && j-1>=1) && (chess[i+1][j-1]>='a' && chess[i+1][j-1]<='z')) dead[i+1][j-1]=1;
	if(j-1>=1 && (chess[i][j-1]>='a' && chess[i][j-1]<='z')) dead[i][j-1]=1;
	if(i-1>=1 && (chess[i-1][j]>='a' && chess[i-1][j]<='z')) dead[i-1][j]=1;
	if((i-1>=1 && j-1>=1) && (chess[i-1][j-1]>='a' && chess[i-1][j-1]<='z')) dead[i-1][j-1]=1;
	if((i+1<=8 && j+1<=8) && (chess[i+1][j+1]>='a' && chess[i+1][j+1]<='z')) dead[i+1][j+1]=1;
	if(j+1<=8 && (chess[i][j+1]>='a' && chess[i][j+1]<='z')) dead[i][j+1]=1;
	if((i-1>=1 && j+1<=8) && (chess[i-1][j+1]>='a' && chess[i-1][j+1]<='z')) dead[i-1][j+1]=1;
}

void knight(int i, int j)
{
	if((i+2<=8 && j-1>=1) && (chess[i+2][j-1]>='a' && chess[i+2][j-1]<='z')) dead[i+2][j-1]=1;
	if((i+2<=8 && j+1<=8) && (chess[i+2][j+1]>='a' && chess[i+2][j+1]<='z')) dead[i+2][j+1]=1;
	if((i+1<=8 && j-2>=1) && (chess[i+1][j-2]>='a' && chess[i+1][j-2]<='z')) dead[i+1][j-2]=1;
	if((i+1<=8 && j+2<=8) && (chess[i+1][j+2]>='a' && chess[i+1][j+2]<='z')) dead[i+1][j+2]=1;
	if((i-1>=1 && j-2>=1) && (chess[i-1][j-2]>='a' && chess[i-1][j-2]<='z')) dead[i-1][j-2]=1;
	if((i-1>=1 && j+2<=8) && (chess[i-1][j+2]>='a' && chess[i-1][j+2]<='z')) dead[i-1][j+2]=1;
	if((i-2>=1 && j-1>=1) && (chess[i-2][j-1]>='a' && chess[i-2][j-1]<='z')) dead[i-2][j-1]=1;
	if((i-2>=1 && j+1<=8) && (chess[i-2][j+1]>='a' && chess[i-2][j+1]<='z')) dead[i-2][j+1]=1;
}

int main()
{
	int t;
	scanf("%d",&t);
	rep(i,1,t)
	{
		memset(dead,0,sizeof(dead));
		rev(j,8)
		{
			getchar();
			rep(k,1,8)
			{
				scanf("%c",&chess[j][k]);
			}
		}
		cas(i);
		rev(j,8)
		{
			rep(k,1,8)
			{
				if(chess[j][k]=='P') pawn(j,k);
				else if(chess[j][k]=='R') rook(j,k);
				else if(chess[j][k]=='B') bishop(j,k);
				else if(chess[j][k]=='Q') queen(j,k);
				else if(chess[j][k]=='K') king(j,k);
				else if(chess[j][k]=='N') knight(j,k);
			}
		}
		print();
	}
	return 0;
}
