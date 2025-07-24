#include<stdio.h>
#include<string.h>
int main(){
    char arr[100001];
    fgets(arr, sizeof(arr),stdin);
    int len= strlen(arr);
    for(int i=0; i<len;i++){
        if(arr[i]==','){
            arr[i]=' ';
        }
        else if(arr[i]>='A' && arr[i]<='Z'){
            arr[i]= arr[i]+32;
        }
        else if(arr[i]>='a' && arr[i]<='z'){
            arr[i]=arr[i]-32;
        }
    }
    printf("%s",arr);

    return 0;
}