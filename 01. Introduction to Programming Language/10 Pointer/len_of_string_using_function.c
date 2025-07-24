#include<stdio.h>

int str_len_fun(char st[]){
    int count = 0;
    for(int i=0; st[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char st[100];
    scanf("%s",st);
    int len = str_len_fun(st);
    printf("%d",len);
    return 0;
}