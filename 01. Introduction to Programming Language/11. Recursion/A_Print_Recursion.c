#include<stdio.h>

void print_rec(int i, int n){
    
    if(i>n){
        return;
    }
    printf("I love Recursion\n");
    print_rec(i+1,n);
}

int main(){
    int n;
    scanf("%d",&n);
    print_rec(1,n);
    return 0;
}