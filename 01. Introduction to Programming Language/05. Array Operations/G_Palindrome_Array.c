#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int palindrome=1;
    int i=0;
    int j=n-1;

    while(i < j) {
        if(arr[i] != arr[j]) {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if(palindrome==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}