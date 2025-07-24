#include<stdio.h>

void rec_func(int x){
    if(x==0){
        return;
    }
    
    rec_func(x/10);
    int last = x%10;
    printf("%d ",last);

}

int main(){
    int t,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&x);
        if(x==0){
            printf("0");
        }
        rec_func(x);
        printf("\n");
    }
    return 0;
}