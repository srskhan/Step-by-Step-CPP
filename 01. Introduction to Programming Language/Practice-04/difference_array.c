#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int test_case=0;test_case<t;test_case++){
        int n;
        int arr1[1001];
        int arr2[1001];
        int arrC[1001];
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr1[i]);
        }
        for(int i=0;i<n;i++){  //for coping
            arr2[i]=arr1[i];
        }

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr2[i]>arr2[j]){        //swap
                    int temp=arr2[i];   
                    arr2[i]=arr2[j];
                    arr2[j]=temp;

                }
            }
        }
        
        for(int i=0;i<n;i++){
            arrC[i]= abs(arr1[i]-arr2[i]);
            
        }
    
        for(int i=0;i<n;i++){
            printf("%d ",arrC[i]);
        }
        printf("\n");


    }
    return 0;
}