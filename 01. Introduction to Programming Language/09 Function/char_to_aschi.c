#include<stdio.h>

int char_to_ascii(char a){
    int val=a; 
    return val;
}
int main(){ 
    char alpha;
    scanf("%c",&alpha);
    int val = char_to_ascii(alpha);
    printf("%d",val);
    return 0;
} 