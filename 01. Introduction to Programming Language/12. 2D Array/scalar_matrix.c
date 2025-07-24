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
    
    bool is_scalar = true;

    if(r==c){  //checking square
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==j){ //we are at the diagonal
                    if(arr[i][j]!=arr[0][0]){
                        is_scalar = false;
                        break;
                    }
                }
                else{    //we are outside the diagonal
                    if(arr[i][j]!=0){
                        is_scalar=false;
                        break;
                    }
                }
            }
        }
    }
    else{
        printf("Not scalar matrix");
        return 0;
    }

    if (is_scalar==true)
    {
        printf("Scalar Matrix.");
    }
    else{
        printf("Not scalar matrix");
    }
    
}