#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num=1;
    int space = n-1;

    for(int i=1;i<=n;i++){   //for printing Line
        for(int j=1;j<=space;j++){  //for printing space
            printf(" ");
        }
        for(int j=1;j<=num;j++){    //for printing star
            printf("%d ",j);
        }
        printf("\n");
        num++;
        space--;

    }
    return 0;
}