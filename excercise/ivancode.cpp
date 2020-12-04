#include<bits/stdc++.h>
using namespace std;
void rec(int input){
	if (input ==1){
		printf("%c",65);
	}
	else{
		rec(input-1),printf("%c",64+input),rec(input-1);
	}
}
int main(){
	int n,input;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&input);
		printf("Case #%d:  ",i);
		rec(input);
		printf("\n");
		}
	}

