#include<stdio.h>

void sum_rec(long long int arr[],int i,long long int n){
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(i==n){
        printf("%lld",sum);
        return;
    }
    sum_rec(arr,i+1,n);
}

int main(){
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    sum_rec(arr,0,n);
    return 0;
}