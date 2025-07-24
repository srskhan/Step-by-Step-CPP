#include<stdio.h>
#include<stdlib.h>

int main(){
    long long int n;
    scanf("%lld",&n);

    int even_value=0;
    int odd_value=0;
    int last_value;
    int position = 1;
    
    while (n!=0)
    {
        last_value=n%10;
        if(position%2==0){
            even_value+=last_value;
        }
        else{
            odd_value+=last_value;
        }

        n=n/10;
        position++;

    }
    int diff= llabs(odd_value-even_value);

    if(diff%11==0){
        printf("YES");
    }
    else{
        printf("NO");
    }


    
    return 0;
}