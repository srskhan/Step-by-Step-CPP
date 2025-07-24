#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int a,b;
    for(int i=0; i<t;i++){
        scanf("%d %d\n",&a,&b);
        if(a==b){
            printf("Square\n");
        }
        else{
            printf("Rectangle\n");
        }
    }

    return 0;
}