#include<stdio.h>
int main(){
    int n, mul;
    scanf("%d",&n);
    for(int i = 1; i<=12; i++){
        mul = n* i;
        printf("%d * %d = %d\n", n, i, mul);
    }
    return 0;
}