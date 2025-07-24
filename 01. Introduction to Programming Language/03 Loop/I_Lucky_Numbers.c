#include<stdio.h>
int main(){
    int num, last, first;
    scanf("%d",&num);
    last = num%10;
    first = num/10;
    if(last%first == 0){
        printf("YES");
    }
    else if(first % last == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}