#include <stdio.h>
#include <string.h>


long bits = 0;
long max = 0;

void binary(long N) {
    if (N > 1) { 
        binary(N / 2);
    }
    if (N % 2 == 0) {
        bits += 1;
        return;
    } 
    if (max < bits) {
        max = bits;
    }
    bits = 0;
}

long solution(long N) {
    binary(N);
    return max;
}

int main(){
	int n, k , count , max, a;
//	scanf("%d", &n);
	
	max=0;
	count=0;
	long long bin = 0;
	int rem, i=1, step =1;
	while(n!=0){
		rem = n%2;
		if(rem==0){
			count++;
		}else{
			count=0;
		}
		if(count>max){
			max = count;
		}
		n/=2;
		i*=10;
		count = 0;
 	}
	printf("%ld", solution(32));
	
	return 0;
}

