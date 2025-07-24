#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    char t[1001];
    
    scanf("%s",&s);
    scanf("%s",t);
    
    int len1= strlen(s);
    int len2= strlen(t);

    printf("%d %d\n",len1,len2);
    printf("%s %s",s,t);
    return 0;
}