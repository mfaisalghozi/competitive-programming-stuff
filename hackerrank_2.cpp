#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,r,s,f,t;
    scanf("%d", &n);
    r = (n*2)-1;
    s = 0;
    f = r-1;
    t = n;
    for(int j=0;j<r;j++){
        for(int i=0;i<r;i++){
            if(j==0 || i==0 || j==f || i==f) printf("%d", n);
            else printf(" ");
        }
        printf("\n");
    }
  	// Complete the code to print the pattern.
    return 0;
}
