#include<stdio.h>
#include<string.h>
int main(){
    char st[10001];
    scanf("%s",st);
    int freq[26]={0};
    int len = strlen(st);

    for(int i=0;i<len;i++){
        int val = st[i]-'a';
        freq[val]++;
    }

    for(int i=0;i<26;i++){
        if(freq[i]==0){
            continue;
        }
        else{
            printf("%c - %d\n",'a'+i,freq[i]);
        } 
    }
    return 0;
}