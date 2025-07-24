#include<stdio.h>
int main(){
    int t, num;
    scanf("%d\n",&t);
    for(int i= 1;i<=t;i++){
        scanf("%d\n",&num);
        long long int fact =1;
        if(num == 0){
            printf("1\n");
        }
        else{
            for(int j=1; j<=num; j++){
                fact*=j;
            }
            printf("%lld\n",fact);
        }
    }
    return 0;
}