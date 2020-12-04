#include <bits/stdc++.h>
#include <string.h>


int main(){
	
	
	int n,temp1[28],temp2[28],max=0;
	char f[100001],s[100001];
	
	for(int j=0;j<25;j++){
		temp1[j]=0;
		temp2[j]=0;
	}
	
	
	scanf("%d",&n);
	scanf("%s",f);
	scanf("%s",s);
	
	for(int j=0,i=0;j<strlen(f),i<strlen(s);j++,i++){
		temp1[f[j]-'a']++;
		if(temp1[f[j]-'a']>max){
			max=temp1[f[j]-'a'];
		}
		temp2[s[i]-'a']++;
		if(temp2[s[j]-'a']>max){
			max=temp2[f[j]-'a'];
		}
	}
	
	for(int j=0;j<25;j++){
		printf("%d %d %d %c\n",temp1[j],temp2[j],max,j+'a');
	}
	
	
	
	return 0;
}
