#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int mn= INT_MAX;
    int mx= INT_MIN;
    int mn_idx=0;
    int mx_idx=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]>=mx){
            mx = arr[i];
            mx_idx= i;
        }
        if(arr[i]<=mn){
            mn = arr[i];
            mn_idx=i;
        }
    }
    int temp = arr[mn_idx];
    arr[mn_idx]= arr[mx_idx];
    arr[mx_idx] = temp;

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}