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
    
    bool is_diagonal = true;

    if(r==c){  //checking square
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i+j!=r-1){    //we are outside the diagonal
                    if(arr[i][j]!=0){
                        is_diagonal=false;
                    }
                }
            }
        }
    }
    else{
        printf("Not a secondary diagonal Matrix");
    }

    if (is_diagonal==true)
    {
        printf("Secondary Diagonal Matrix.");
    }
    else{
        printf("Not a Secondary Diagonal Matrix.");
    }
    
}