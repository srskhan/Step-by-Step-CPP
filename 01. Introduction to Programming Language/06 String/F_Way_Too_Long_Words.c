#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    char arr[101];
    for(int i=0;i<t;i++){
        scanf("%s\n",&arr);
        int len = strlen(arr);
        if(strlen(arr)>10){
            printf("%c%d%c\n",arr[0],len-2,arr[len-1]);
        }
        else if(strlen(arr)<=10){
            printf("%s\n",arr);
        }
    }
    return 0;
}