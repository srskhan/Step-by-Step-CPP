#include<stdio.h>

void print_func(int n){
    if(n>=1){
        printf("%d",1);
        for(int i=2;i<=n;i++){
            printf(" %d",i);
        } 
    }
    
}

int main(){
    int n;
    scanf("%d",&n);
    print_func(n);
    return 0;
}