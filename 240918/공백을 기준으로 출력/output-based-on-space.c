#include <stdio.h>
#include <string.h>

int main() {

    char str1[101];
    char str2[101];

    fgets(str1,101,stdin);
    fgets(str2,101,stdin);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for(int i=0;i<len1;i++){
        if(str1[i]!=' ' && str1[i]!='\n'){
        printf("%c",str1[i]);
        }
    }
    for(int i=0;i<len2;i++){
        if(str2[i]!=' '&& str2[i]!='\n'){
        printf("%c",str2[i]);
        }
    }
    return 0;
}