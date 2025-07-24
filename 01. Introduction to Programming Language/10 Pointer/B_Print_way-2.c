#include<stdio.h>

void print_func(int n){
    for(int i=1;i<=n;i++){
        if(i>1){
            printf(" ");
        }
        printf("%d",i);
    } 
}

int main(){
    int n;
    scanf("%d",&n);
    print_func(n);
    return 0;
}