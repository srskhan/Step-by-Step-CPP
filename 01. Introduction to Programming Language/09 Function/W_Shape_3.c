#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int star_up=1;
    int space_up = n-1;

    int star_down = 2*n-1;
    int space_down = 0;
    for (int i = 1; i <= n; i++) // for printing upper line
    {
        
        for(int j=1; j<=space_up;j++ )//for printing space
        {
            printf(" ");
        }
        for(int j=1;j<=star_up;j++) //for printing star
        {
            printf("*");
        }
        printf("\n");
        space_up--;
        star_up+=2;

    }
    for (int i = n; i>=1; i--) // for printing down line
    {
        
        for(int j=0; j<space_down;j++ )//for printing space
        {
            printf(" ");
        }
        for(int j=1;j<=star_down;j++) //for printing star
        {
            printf("*");
        }
        printf("\n");
        space_down++;
        star_down-=2;

    }
    
    return 0;
}