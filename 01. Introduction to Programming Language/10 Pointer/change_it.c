#include<stdio.h>

void change_it(int arr[],int n){
    arr[n-1]=100;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    change_it(arr,n);
    return 0;
}