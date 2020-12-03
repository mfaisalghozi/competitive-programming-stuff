#include<stdio.h>
#include<string.h>


void pangram(char word[101]){
	int alfabet[26];
	for(int i=0; i<26;i++){
		alfabet[i]=0;
	}
	
	for(int i=0; i<strlen(word); i++){
		if(word[i]>='a'&&word[i]<='z'){
			alfabet[word[i]-'a'] = 1;
		}
		else if(word[i]>='A'&&word[i]<='Z'){
			alfabet[word[i]-'A'] = 1;
		}
	}
	
	bool t = false;
	for(int i=0; i<26; i++){
		if(alfabet[i]==0){
			if(t==false) printf("missing ");
			t=true;
			printf("%c", i+'a');
		}
	}
	if(t==true) printf("\n");
	if(t==false){
		printf("pangram\n");
	}
	
}


int main(){
	
	FILE *file = fopen("testdata.in", "r");
	int T;
	fscanf(file, "%d\n", &T);
	
	for(int i=0; i<T; i++){
		
		char word[101];
		fscanf(file, "%[^\n]\n", word);
		printf("Case #%d: ", i+1);
		pangram(word);
		
	}
	/*
	for(int i=0; i<T; i++){
		
		char word[101];
		printf("%s ",word);
		pangram(word);
		
	}
	*/
	
	
	fclose(file);
	
//	pangram("!@#$ 949 akdsfj FKDK");
	
	return 0;
}
