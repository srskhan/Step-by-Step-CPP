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
    
    bool is_unit = true;

    if(r==c){  //checking square
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==j){ //we are at the diagonal
                    if(arr[i][j]!=1){
                        is_unit = false;
                        break;
                    }
                }
                else{    //we are outside the diagonal
                    if(arr[i][j]!=0){
                        is_unit=false;
                        break;
                    }
                }
            }
        }
    }
    else{
        printf("Not Unit matrix");
        return 0;
    }

    if (is_unit==true)
    {
        printf("Unit Matrix.");
    }
    else{
        printf("Not Unit matrix");
    }
    
}