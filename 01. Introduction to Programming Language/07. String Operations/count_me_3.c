#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char st[10001];
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        scanf("%s",st);
        int cap_count=0;
        int small_count=0;
        int digit_count=0;
        for(int i=0;st[i]!='\0';i++){
            if(st[i]>='A' && st[i]<='Z'){
                cap_count++;
            }
            else if(st[i]>='a'&& st[i]<='z'){
                small_count++;
            }
            else if(st[i]>='0' && st[i]<='9'){
                digit_count++;
            }
        }
        printf("%d %d %d\n",cap_count, small_count,digit_count);
        
    }
    return 0;
}