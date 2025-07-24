#include<stdio.h>
#include<string.h>

int is_palindrome(char st[]){

    int palin = 0;
    int i=0;
    int j= strlen(st)-1;
    while (st[i]==st[j])
    {
        i++;
        j--;
        if(i>j){
            palin=1;
        }
    }
    return palin;  

}

int main(){
    char st[1001];
    scanf("%s",st);
    int pd = is_palindrome(st);
    if(pd==1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}