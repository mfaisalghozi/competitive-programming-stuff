
#include <stdio.h>  
 
  
long long exponentMod(int A, int B, int C) 
{ 

    if (A == 0) 
        return 0; 
    if (B == 0) 
        return 1; 
  
    long long y; 
    if (B % 2 == 0) { 
        y = exponentMod(A, B / 2, C); 
        y = (y * y) % C; 
    } 
  

    else { 
        y = A % C; 
        y = (y * exponentMod(A, B - 1, C) % C) % C; 
    } 
  
    return (long long)((y + C) % C); 
}

long long exponentMod1(int D, int E, int C) 
{ 

    if (D == 0) 
        return 0; 
    if (E == 0) 
        return 1; 
  
    long long p; 
    if (E % 2 == 0) { 
        p = exponentMod1(D, E / 2, C); 
        p = (p * p) % C; 
    } 
  
    else { 
        p = D % C; 
        p = (p * exponentMod1(D, E - 1, C) % C) % C; 
    } 
  
    return (long long)((p + C) % C); 
} 
  
int main()  
{  
   int A= 2, B, C = 1000000007 , D=3, E, t;
   long long j,x;
   scanf("%d",&t);
   for(int u=0;u<t;u++){
    scanf("%d %d", &B, &E);
   	j = exponentMod(A,B,C);
   	x = exponentMod1(D,E,C);
   	printf("%lld\n", (j*x)%C );
	}
	
   return 0;  
}
