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
    
    bool is_zero = true;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]!=0){
                is_zero = false;
            }
        }
    }
    if (is_zero==true)
    {
        printf("Zero Matrix");
    }
    else{
        printf("Not Zero Matrix");
    }
    
}