#include <stdio.h>

int main() {
   int N = 5, M = 6;
   
   
   
   int source[N] = {14,13,15,11,12};
   int small[N];
   int target[M][N] = {
    {4,2,1,3,5},
    {6,8,7,10,9},
    {14,15,12,11,13},
    {17,20,16,18,19},
    {22,21,24,23,25},
    {30,29,28,17,26}
	};
   
   int smallestSource = 100;
   int smallestTarget = 0;
   int sign = 0;
	   
	//COMPLEXITY O(N) => Searching smallest number on source array	   
   for(int i = 0; i<N ; i++){
		if(source[i]<smallestSource){
 			smallestSource = source[i];
	    }	
   }
   
   //COMPLEXITY O(M) => searching smallest number on target array, and
   //compare it with smallest number from source
   for(int i=0;i<M;i++){
	smallestTarget = 100;
		if(target[i][0]<smallestTarget){
   			smallestTarget = target[i][0];
   			if(smallestTarget == smallestSource){
   				sign = i;
   				break;
			}
		}
		if(target[i][1]<smallestTarget){
   			smallestTarget = target[i][1];
   			if(smallestTarget == smallestSource){
   				sign = i;
   				break;
			}
		}
		if(target[i][2]<smallestTarget){
   			smallestTarget = target[i][2];
   			if(smallestTarget == smallestSource){
   				sign = i;
   				break;
			}
		}
		if(target[i][3]<smallestTarget){
   			smallestTarget = target[i][3];
   			if(smallestTarget == smallestSource){
   				sign = i;
   				break;
			}
		}
		if(target[i][4]<smallestTarget){
   			smallestTarget = target[i][4];
   			if(smallestTarget == smallestSource){
   				sign = i;
   				break;
			}
		}   
   }
   
   //COMPLEXITY O(N^2) => compare source and target list
   int benar=0;
   for(int i=0;i<N;i++){
   	for(int j=0;j<N;j++){
   	 if(target[sign][i] == source[j]){
   	  benar++;
	 }
	}
   }
   
   if(benar==5) printf("True");
   else printf("False");
      
   return 0;
}

