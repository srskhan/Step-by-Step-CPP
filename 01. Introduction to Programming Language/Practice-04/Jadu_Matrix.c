#include<stdio.h>
#include<stdbool.h>

int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    bool is_jadu = true;
    
    if(r==c){//square matrix
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==j){     // we are at primary diagonal
                    if(arr[i][j]!=1){
                        is_jadu=false;
                    }
                }
                else{       //we are outside the primary diagonal
                    if(i+j==r-1){ // we are at secondary diagonal
                        if(arr[i][j]!=1){
                            is_jadu=false;
                        }
                    }
                    else{       //we are outside the secondary diagonal
                        if(arr[i][j]!=0){ 
                            is_jadu=false;
                        }
                    }
                }
            }
        }
    }
    else{
        is_jadu=false;
    }


    if(is_jadu==true){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}