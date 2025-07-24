#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int m1,m2,d;
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&m1,&m2,&d);

        int days_require = (d*m1)/(m1+m2);
    
        int less_days = d- days_require;
        printf("%d\n",less_days);
        
    }

    return 0;
}