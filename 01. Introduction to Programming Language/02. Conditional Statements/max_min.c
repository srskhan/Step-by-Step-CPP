#include<stdio.h>
int main(){
    int a, b,c, max, min;
    scanf("%d%d%d", &a,&b,&c);
    //minimum
    if (a<=b && a<=c){
        printf("%d ",a);
    }
    else if (b<=a && b<=c){
        printf("%d ",b);
    }
    else{
        printf("%d ",c);
    }
    //max
    if (a>=b && a>=c){
        printf("%d",a);
    }
    else if (b>=a && b>=c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    return 0;
}