#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int pri_dig=0;
    int sec_dig=0;

    for(int i=0;i<n;i++){ //for adding diagonal element
        for(int j=0;j<n;j++){
            if(i==j){
                pri_dig+=arr[i][j];
            }
        }
    }

    for(int i=0;i<n;i++){ //for adding secondary element
        for(int j=0;j<n;j++){
            if(i+j==n-1){
                sec_dig+=arr[i][j];
            }
        }
    }
    int val = abs(pri_dig-sec_dig);
    printf("%d",val);

    return 0;
}