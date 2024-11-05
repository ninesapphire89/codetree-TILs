#include <stdio.h>
#include <string.h>

int main() {
    
    char s[100];

    scanf("%s",s);
    int len = strlen(s);

    for(int i=1;i<len-1;i++){
        s[i]=s[i+1];
    }
    
    int len_1 = strlen(s);

    for(int i=len_1-3;i<len_1-2;i++){
        s[i]=s[i+1];
    }
    s[len_1-2]='\0';

    printf("%s",s);
    return 0;
}