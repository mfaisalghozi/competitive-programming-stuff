#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    char number[9][10]={"one","two","three","four","five","six","seven","eight","nine"} ;
    scanf("%d\n%d", &a, &b);
    if(b<9){
        for(int j=a;j<=b;j++){
            printf("%s\n",number[j-1]);
        }
    }
    else{
        for(int j=a;j<=9;j++){ 
            printf("%s\n",number[j-1]);
        }
        for(int j=10;j<=b;j++){
            if(j%2==1){
                printf("odd\n");
            }
            else{
                printf("even\n");
            }
        }      
    }
    
    
    
    
    return 0;
}
