#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if (c>='0' && c<='9'){
        printf("IS DIGIT");
    } 
    else{
        printf("ALPHA\n");
        if (c>='A' && c<= 'Z'){
            printf("IS CAPITAL");
        }
        if (c>= 'a' && c<= 'z'){
            printf("IS SMALL");
        }
    }
    
    return 0;
}