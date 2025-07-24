#include<stdio.h>
int main(){
    int n;
    char ascii= 'A';
    scanf("%d",&n);

    for(int i=1;i<=n;i++){   //for printing Line
        for(int j='A';j<=ascii;j++){    //for printing star
            printf("%c ",j);
        }
        printf("\n");
        ascii++;
    }
    return 0;
}