#include <stdio.h>
int main(){
	FILE *helo = fopen("testaja.in","r");
	int t;
	char huruf[101];
	
	fscanf(helo,"%d\n",&t);
	
	for(int i=0; i<t ; i++){
		fscanf(helo, "%[^\n]\n", huruf);		
	}
	
	printf("%s",huruf);
	
	fclose(helo);
	
	return 0;
}
