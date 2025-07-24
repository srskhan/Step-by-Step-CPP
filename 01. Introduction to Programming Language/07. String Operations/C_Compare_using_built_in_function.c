#include<stdio.h>
#include<string.h>
int main(){
    char a[21],b[21];
    scanf("%s %s",&a,b);

    int val= strcmp(a,b);

    if(val>0){
        printf("%s",b);
    }
    else if(val<0){
        printf("%s",a);
    }
    else if( val==0){
        printf("%s",a);
    }
    return 0;
}