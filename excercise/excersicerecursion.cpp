#include<stdio.h>





int main(){
	
	char word[100],name[100];
	scanf(" %[^,] , %[^,]", word, name);
	fflush(stdin);
	printf("%s\n",word);
	printf("%s\n",name);
	
	
	getchar();
	return 0;
}
