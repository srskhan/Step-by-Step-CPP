#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int star_upper = 1;
    int star_lower=1;
    int space_upper=0.5*n+4.5;
    int space_lower=5;
    int upper_line=0.5*n+5.5;

    for(int i=1;i<=upper_line;i++){     //for printing line
        for(int j=1;j<=space_upper;j++){
            printf(" ");                //for printing space
        }
        for(int j=1;j<=star_upper;j++){
            printf("*");                //for printing star
        }
        printf("\n");
        star_upper+=2;
        space_upper-=1;
    }

    for(int i=1;i<=5;i++){      //for printing line
        for(int j=1;j<=space_lower;j++){
            printf(" ");        //for printing space
        }
        for(int j=1;j<=n;j++){
            printf("*");        //for printing star
        }
        printf("\n");
        star_lower+=2;

    }


    return 0;
}