#include<stdio.h>
#include<string.h>

int rec_func(char st[],int i){
    
    if(st[i]=='\0'){
        return 0;
    }
    int cnt= rec_func(st,i+1);
    if(st[i]== 'a'||st[i]=='e'||st[i]== 'i'||st[i]== 'o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U'){
        return cnt+1;
    }
    else{
        return cnt;
    }
}

int main(){
    char st[201];
    fgets(st,sizeof(st),stdin);

    int vowel= rec_func(st,0);
    printf("%d",vowel);

    return 0;
}