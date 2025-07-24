#include<stdio.h>
#include<stdbool.h>

int main(){
    int r, c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    int k; scanf("%d",&k);
    bool exist = false;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==k){ 
                exist = true;
            }
        }
    }

    if (exist==true)
    {
        printf("will not take number");
    }
    else{
        printf("will take number");
    }
    
}