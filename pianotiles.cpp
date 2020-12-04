#include <stdio.h>
int hitungga(char tile[101][101],int n,int m);
int main(){
	int t;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		int n,m,hasil;
		char tile[101][101];
		scanf("%d %d",&n,&m);
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
			scanf(" %c",&tile[j][k]);
			}	
		}
		hasil = hitungga(tile,n,m);
		printf("Case #%d: %d\n",a+1,hasil);	
	}
		
	getchar();
	return 0;
}

int hitungga(char tile[101][101],int n,int m){
	
	int ada,ga,sama;
	ada=0,ga=1,sama=1;
	for(int j=0;j<(n-1);j++){
			for(int k=0;k<m;k++){
				if(tile[j][k]=='/'){
					if(tile[j+1][k-1]=='|' || tile[j+1][k-1]=='\\' || tile[j+1][k-1]=='/' ){
						ada++;	
					}
					else if(tile[j+1][k]=='/' && k==0 ){
							sama++;
							ga++;
					}
					else{
						ga++;
					}
				}
				if(tile[j][k]=='|'){
					if(tile[j+1][k]=='|' || tile[j+1][k]=='\\' || tile[j+1][k]=='/' ){
						ada++;
					}
					else{
						ga++;
					}
				}
				if(tile[j][k]=='\\'){
					if(tile[j+1][k+1]=='|' || tile[j+1][k+1]=='\\' || tile[j+1][k+1]=='/' ){
						ada++;
					}
					else if(tile[j+1][k]=='\\' && (m-k)==1){
							sama++;
							ga++;
					}
					else{
						ga++;
					}
				}	
			}	
		}
		if(sama==n){
			return 1;
		}
		else{
			return ga;
		}
}
