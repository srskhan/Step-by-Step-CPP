#include<stdio.h>

void func(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    func(&a,&b);
    printf("%d %d",a,b);
    return 0;
}