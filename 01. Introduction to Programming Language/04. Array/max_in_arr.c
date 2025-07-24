#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int mx = INT_MIN;
    for(int j=0; j<n; j++){
        if(arr[j]>mx){
            mx = arr[j];
        }
    }
    printf("%d",mx);
    
    return 0;
}