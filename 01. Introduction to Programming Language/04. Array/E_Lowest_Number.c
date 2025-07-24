#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ind=0;
    int low= INT_MAX;
    for(int j=0;j<n;j++){
        if (arr[j]< low){
            low= arr[j];
            ind= j;
        }
    }
    printf("%d %d",low, ind+1);

    return 0;
}