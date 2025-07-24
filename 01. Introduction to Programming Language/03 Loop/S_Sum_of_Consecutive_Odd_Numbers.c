#include<stdio.h>
int main(){
    int t;
    scanf("%d\n",&t);
    for(int i=1; i<=t; i++){
        int a,b;
        int sum =0;
        scanf("%d %d\n",&a,&b);
        if(a>=b){
            for(int j=b+1; j<a;j++){
                if(j%2!=0){
                    sum=sum+j;
                }
            }
        }
        else if(b>a){
            for(int k=a+1; k<b; k++){
                if(k%2!=0){
                    sum= sum+k;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}