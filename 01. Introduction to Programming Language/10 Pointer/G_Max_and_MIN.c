#include<stdio.h>
#include<limits.h>

void max_min(int arr[],int n){
    int mx= INT_MIN;
    int mn= INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx= arr[i];
        }
        if(arr[i]<mn){
            mn= arr[i];
        }
    }
    printf("%d %d",mn,mx);
    
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[100001];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max_min(arr,n);
    return 0;
}