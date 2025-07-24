#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[5][5];
    int moves;
    int row,col;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1){
                row=i;
                col=j;
            }
        }
    }
    moves = abs(row-2)+abs(col-2);
    printf("%d",moves);
    return 0;
}