#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int space= n-1 ;
    int hash= 1;
    int dash= 1;

    int space_down = 1;
    int hash_down = 2*n-3;
    int dash_down = 2*n-3;

    
    for(int i=1;i<=n;i++){ //for printing line
        for(int j=1;j<=space;j++){ //for printing space
            printf(" ");
        }
        if(i%2!=0){
            for(int j=1;j<=hash;j++){  //for printing hash
                printf("#");
            }
        }
        else if(i%2==0){
            for(int j=1;j<=dash;j++){  //for printing dash
                printf("-");
            }
        }
        printf("\n");
        space--;
        hash+=2;
        dash+=2;
    }

    for(int i=n-1;i>=1;i--){ //for printing line
        for(int j=1;j<=space_down;j++){ //for printing space
            printf(" ");
        }
        if(i%2!=0){
            for(int j=1;j<=hash_down;j++){  //for printing hash
                printf("#");
            }
        }
        else if(i%2==0){
            for(int j=1;j<=dash_down;j++){  //for printing dash
                printf("-");
            }
        }
        printf("\n");
        space_down++;
        hash_down-=2;
        dash_down-=2;
    }
    return 0;
}