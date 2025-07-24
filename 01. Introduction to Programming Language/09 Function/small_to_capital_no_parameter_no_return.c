#include<stdio.h>
void small_to_capital(){
    char ch;
    scanf("%c",&ch);
    char cap= ch -32;
    printf("%c",cap); 
}
int main(){
    small_to_capital();
    return 0;
}