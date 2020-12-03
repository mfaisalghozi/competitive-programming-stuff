#include <stdio.h>
int banding(char name1[101],char nama2[101]);

struct fren{
	int age;
	char name[31];
}teman[101];


int main(){
	int t;
	char namateman[100][31];
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		scanf("%d %s",&teman[a].age,teman[a].name);
		
		
	}
	
	int q;
	scanf("%d",&q);
	for(int a=0;a<q;a++){
		scanf("%s",namateman[a]);
	}
	
	int r,yes;
	for(int a=0;a<q;a++){
	yes=0;
		for(int b=0;b<t;b++){
			r=banding(namateman[a],teman[b].name);
			if(r==1){
				printf("%d\n",teman[b].age);
				yes=1;
			}	
		}
	if(yes==0){
			printf("-1\n");
		}	
	}
	getchar();
	return 0;
}

int banding(char nama1[101],char nama2[101]){
	int b,sama,hb1,hb2;
	b=0,sama=0,hb1=1,hb2=1;
	for(int a=0;nama1[a]!='\0';a++){
		if(nama1[a]>='A' && nama1[a]<='Z'){
			hb1=0;
		}
	}
	
	for(int a=0;nama2[a]!='\0';a++){
		if(nama2[a]>='A' && nama2[a]<='Z'){
			hb2=0;
		}
	}
	
	for(int a=0;nama1[a]!='\0';a++){
		b++;
		if (nama1[a]==nama2[a]){
			sama++;
		}
	}
	
	if(b==sama && hb1==1 && hb2==1){
		return 1;
	}
	else{
		return 0;
	}
}


