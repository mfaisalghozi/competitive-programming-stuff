#include <stdio.h>
#include <stdlib.h>
int parent(int i){
    if(i<=0)
        return -1;
    return (i-1)/2;
}
int lchild(int i,int n){
    if(2*i+1>=n)
        return -1;
    else return 2*i+1;
}
void swap(int *A,int i,int j){
    int t=A[i];
    A[i]=A[j];
    A[j]=t;
}
int rchild(int i,int n){
    if(2*i+2>=n)
        return -1;
    else return 2*i+2;
}
void InHeap(int *A,int n){
    int d,j;
    for(int i=0;i<n;i++){
        scanf("%d",&d);
        A[i]=d;
        j=i;
        while(parent(j)!=-1&&A[j]>A[parent(j)]){
            swap(A,j,parent(j));
            j=parent (j);
        }
    }
}
void sort(int *A,int N){
    int t,n=N-1;
    while(n){
        t=0;
        swap(A,0,n);
        while(t>=0){
            if(lchild(t,n)!=-1&&rchild(t,n)!=-1){
                if(A[lchild(t,n)]>A[t]&&A[lchild(t,n)]>A[rchild(t,n)]){
                    swap(A,t,lchild(t,n));
                    t=lchild(t,n);
                }
                else if(A[rchild(t,n)]>A[t]&&A[rchild(t,n)]>=A[lchild(t,n)]){
                    swap(A,t,rchild(t,n));
                    t=rchild(t,n);
                }
                else
                    t=-1;
            }
            else if(rchild(t,n)==-1&&lchild(t,n)!=-1){
                if(A[lchild(t,n)]>A[t]){
                    swap(A,t,lchild(t,n));
                    t=lchild(t,n);
                }
                else
                    t=-1;
            }
            else
                t=-1;
        }
        n--;
    }
}
int main(){
        int n;
        scanf("%d",&n);
        int *A;
        A=(int *)malloc(sizeof(int)*n);
        InHeap(A,n);
        sort(A,n);

        for(int i=0;i<n;i++)
            printf("%d\n",A[i]);
        return 0;

}

