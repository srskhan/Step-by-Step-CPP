#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n];

    for(int i=0; i<n;i++){
        scanf("%d",&A[i]);
    }

    for(int k = 0; k<n;k++){
        if(A[k]<=10){
            printf("A[%d] = %d\n",k,A[k]);
        }
    }
    return 0;
}