#include<stdio.h>
#include<string.h>
int main(){
    char arr[1001];
    scanf("%s",&arr);
    int len = strlen(arr);
    int is_palin = 0;
    int i=0;
    int j=len-1;
    while(arr[i]==arr[j]){
        i++;
        j--;
        if(i>j){
            is_palin=1;
        }
    }

    if(is_palin==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}