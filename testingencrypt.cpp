#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int n,b=0;
    scanf("%c",&a);
    printf("%c\n", (a - 'A' + 1) % 26 + 'A' );
    
    
    getchar();
    return 0;
}
