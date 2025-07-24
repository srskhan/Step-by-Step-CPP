#include<stdio.h>
int main(){
    int n, num;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d\n",&num);

        do
        {
            printf("%d ", num%10);
            num/=10;
        }while (num!=0);
        printf("\n");

    }
    return 0;
}