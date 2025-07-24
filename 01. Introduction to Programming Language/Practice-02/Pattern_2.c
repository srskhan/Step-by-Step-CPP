#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int digit=1;
    int space = n-1;

    for(int i=1;i<=n;i++){  //for printing line
        for(int j=1;j<=space;j++){ //for printing space
            printf(" ");
        }
        for(int j=digit;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
        space--;
        digit++;
    }
    return 0;
}