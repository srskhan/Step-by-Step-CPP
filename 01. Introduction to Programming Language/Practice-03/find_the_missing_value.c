#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    long long int m,a,b,c;
    long long int missing_value;
    for(int i=0;i<t;i++){
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        missing_value = m/(a*b*c);
        if(m%(a*b*c)==0){
            printf("%lld\n",missing_value);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}