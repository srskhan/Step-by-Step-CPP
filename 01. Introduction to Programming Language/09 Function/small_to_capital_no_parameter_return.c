#include<stdio.h>
char small_to_capital(){
    char ch;
    scanf("%c",&ch);
    char cap= ch -32;
    return cap; 
}
int main(){
    char upper_case = small_to_capital();
    printf("%c",upper_case);
    return 0;
}