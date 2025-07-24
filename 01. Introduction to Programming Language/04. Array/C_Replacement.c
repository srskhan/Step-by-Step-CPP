#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++){
        if(arr[j]>0){
            arr[j]=1;
        }
        else if(arr[j]<0){
            arr[j]=2;
        }
        else{
            arr[j]=0;
        }
    }

    for(int k=0; k<n;k++){
        printf("%d ", arr[k]);
    }
    return 0;
}