#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n, s[255], t=0;
	char temp[255];
	char input[n][255];
	char first[255];
	
	do{
		scanf("%d", &n);
	}while(n<1 || n>100);
	
	for(int i=0;i<n;i++){
		scanf("%s[^\n]", &input[i]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int result = strcmp(input[i],input[j]);
			if(result == 0){
				strcpy(input[j], "");
			}
		}
		if(strcmp(input[i],"")!=0){
			t++;
			strcat(first, input[i]);
			strcat(first, " ");
		}
	}
	
	printf("%d\n", t);
	printf("%s\n", first);
		
    return 0;
}
