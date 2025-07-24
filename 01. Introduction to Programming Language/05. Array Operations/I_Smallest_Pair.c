#include<stdio.h>
#include<limits.h>
int main(){
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        
        int n;
        scanf("%d",&n);
        int arr[n+1];

        for(int i=1;i<=n;i++){
            scanf("%d",&arr[i]);
        }
        
        int min = INT_MAX;

        for(int i=1;i<=n; i++){
            for(int j=i+1;j<=n;j++){
                int value = arr[i]+arr[j]+j-i;
                
                if(value<min){
                    min = value;
                }
            }
        }
        printf("%d",min);

    }
    return 0;
}