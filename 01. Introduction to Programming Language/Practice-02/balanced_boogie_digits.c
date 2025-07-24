#include<stdio.h>

int main(){
    int l,r;
    scanf("%d %d",&l,&r);

    int balance_found=0;

    
    for(int i=l;i<=r;i++){
        int odd_count=0;
        int even_count=0;
        int first,last;
        
        last= i%10;
        if(last%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
        last=i/10;
        first=last%10;
        if(first%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
        if(even_count==odd_count){
            printf("%d\n",i);
            balance_found=1;
        }
        
    }

    if(balance_found==0){
        printf("-1");
    }
    return 0;
}