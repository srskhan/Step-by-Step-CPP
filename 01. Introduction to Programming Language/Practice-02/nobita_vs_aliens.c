#include<stdio.h>

int main(){
    int n,k; 
    scanf("%d %d",&n,&k);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int shoot=0;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    int i=0;
    int j=n-1;
    while (i<j)
    {
        if(arr[i]+arr[j]<=k){
            shoot++;
            i++;
            j--;
        }
        else{
            j--;
        }
        
    
    }
    printf("%d",shoot);
    
    return 0;
}