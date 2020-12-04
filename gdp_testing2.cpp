#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int a;
	scanf("%d", &a);
	for(int x=1; x<=a; ++x){
        for(int y=x; y<a; ++y)
        {
            printf(" ");
        }
        for(int y=1; y<=x; ++y)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
