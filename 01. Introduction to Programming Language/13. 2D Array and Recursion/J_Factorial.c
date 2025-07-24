#include<stdio.h>

long long int fac_func(int n){
    if(n==1){
        return 1;
    }
    long long int fac=fac_func(n-1);
    return n*fac;
}

int main(){
    int n;
    scanf("%d",&n);
    long long int ans= fac_func(n);
    printf("%lld",ans);
    return 0;
}