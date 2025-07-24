#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d",&x);

    int found = -1;

    for(int j=0; j<n; j++){
        if(arr[j]==x){
            found=j;
            break;
        }
    }
    printf("%d",found);
    return 0;
}