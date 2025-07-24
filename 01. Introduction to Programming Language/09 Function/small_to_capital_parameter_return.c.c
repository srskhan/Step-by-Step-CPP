#include<stdio.h>
char small_to_capital(char ch){
    char cap= ch -32;
    return cap; 
}
int main(){
    char ch;
    scanf("%c",&ch);
    char cap= small_to_capital(ch);
    printf("%c",cap);
    return 0;
}