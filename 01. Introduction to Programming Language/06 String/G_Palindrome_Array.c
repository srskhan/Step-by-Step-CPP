#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int palin=0;
    int i=0;
    int j=n-1;
    while(arr[i]==arr[j]){
        i++;
        j--;
        if(i>j){
            palin = 1;
            break;
        }
    }
    if(palin==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}