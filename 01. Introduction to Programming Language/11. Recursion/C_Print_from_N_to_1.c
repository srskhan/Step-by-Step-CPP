#include<stdio.h>

void rec_func(int n){
    if(n==1){
        printf("%d",1);
        return;
    }
    printf("%d ",n);
    rec_func(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    rec_func(n);
    return 0;
}