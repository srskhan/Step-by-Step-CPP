#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int star=n*2-1;
    int space = 0;

    for(int i=0;i<n;i++){   //for printing Line
        for(int j=0;j<space;j++){  //for printing space
            printf(" ");
        }
        for(int j=star;j>=1;j--){    //for printing star
            printf("*");
        }
        printf("\n");
        star-=2;
        space++;

    }
    return 0;
}