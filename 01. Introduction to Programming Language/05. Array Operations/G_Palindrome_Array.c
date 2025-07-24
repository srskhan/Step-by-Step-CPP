#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int palindrome=0;
    int i=0;
    int j=n-1;

    while(arr[i]==arr[j]){
        i++;
        j--;
        if(i>j){
            palindrome=1;
            break;
        }
    }

    if(palindrome==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}