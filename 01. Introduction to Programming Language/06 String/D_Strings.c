#include<stdio.h>
#include<string.h>
int main(){
    char a[11];
    char b[11];
    scanf("%s\n%s",&a,&b);
    int len_a = strlen(a);
    int len_b = strlen(b);
    char temp_a[11], temp_b[11];
    strcpy(temp_a, a);
    strcpy(temp_b, b);
    char temp;
    temp = a[0];
    a[0]=b[0];
    b[0]=temp;

    printf("%d %d\n", len_a,len_b);
    printf("%s%s\n",temp_a,temp_b);
    printf("%s %s\n",a,b);
    return 0;
}