#include<stdio.h>
int main(){
    int n,star=1;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){   //for printing Line
        for(int j=1;j<=star;j++){    //for printing star
            printf("*");
        }
        printf("\n");
        star++;
    }
    return 0;
}