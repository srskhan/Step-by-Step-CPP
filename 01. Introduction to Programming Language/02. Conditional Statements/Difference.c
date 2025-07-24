#include<stdio.h>
int main(){
    
    long long int a, b, c, d, diff;
    scanf("%lld%lld%lld%lld", &a,&b,&c,&d);
    diff = (a*b)-(c*d);
    printf("Difference = %lld",diff);
    return 0;
}