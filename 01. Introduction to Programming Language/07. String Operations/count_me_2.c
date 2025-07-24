#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char st[100001];
    scanf("%s",st);
    int consonant=0;
    for(int i=0;st[i]!='\0';i++){
      if(st[i]!='a'&& st[i]!='e' && st[i]!='i' && st[i]!= 'o' && st[i]!='u'){
        consonant++;
        }  
    }
    printf("%d",consonant);
    return 0;
}
