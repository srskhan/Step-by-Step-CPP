#include<stdio.h>
void small_to_capital(char ch){
    char cap= ch -32;
    printf("%c",cap); 
}
int main(){
    char ch;
    scanf("%c",&ch);
    small_to_capital(ch);
    return 0;
}