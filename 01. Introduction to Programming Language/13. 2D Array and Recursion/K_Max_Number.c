#include<stdio.h>
#include<limits.h>

int max_number(int arr[],int n, int i){
    if(i==n-1){
        return arr[i];
    }
    int max_val= max_number(arr,n,i+1);
    if(arr[i]>max_val){
        return arr[i];
    }
    else{
        return max_val;
    }

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mx= max_number(arr,n,0);
    printf("%d",mx);
    return 0;
}