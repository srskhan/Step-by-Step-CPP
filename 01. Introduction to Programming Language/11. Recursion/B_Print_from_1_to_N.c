#include<stdio.h>

void rec_func(int i,int n){
    if(i>n){
        return;
    }
    printf("%d\n",i);
    rec_func(i+1,n);
}

int main(){
    int n;
    scanf("%d",&n);
    rec_func(1,n);
    return 0;
}