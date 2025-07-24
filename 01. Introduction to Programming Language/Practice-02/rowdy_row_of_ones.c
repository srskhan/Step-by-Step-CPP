#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int one_count=0;
    for(int i=0;i<m;i++){
        printf("%d ",arr[0][i]);
        if(arr[0][i]==1){
            one_count++;
        }
    }
    printf("%d",one_count);
    return 0;
}