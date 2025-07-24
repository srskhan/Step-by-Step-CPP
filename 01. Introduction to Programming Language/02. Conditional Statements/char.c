#include<stdio.h>
int main(){
    
    char c;
    int t;
    scanf("%c",&c);
    if (c>=65 && c<= 90){
        t = c + 32;
        printf("%c",t);
    }

    if (c>=97 && c<=122){
        t = c - 32;
        printf("%c",t);
    }
    return 0;
}