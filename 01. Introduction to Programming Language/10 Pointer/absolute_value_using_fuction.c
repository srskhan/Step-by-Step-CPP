#include<stdio.h>

int abs_fun(int n){
    if(n>=0){
        return n;
    }
    else{
        return n*-1;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int abs = abs_fun(n);
    printf("%d",abs);
    return 0;
}