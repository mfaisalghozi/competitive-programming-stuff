#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int a,b[a];
	scanf("%d", &a);
	int r = 0;
	for(int i=0;i<a;i++){
		scanf("%d", &b[i]);
		r=r+b[i];
	}
	printf("%d", r);
		
    return 0;
}

