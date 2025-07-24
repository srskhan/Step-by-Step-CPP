#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    
    int n;
    scanf("%d",&n);
    int min= INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);

        if(abs(x)<min){
            min=abs(x);
        }
    }
    printf("%d",min);
    return 0;
}