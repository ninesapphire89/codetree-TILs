#include <stdio.h>
#include <string.h>
int main() {
    char str1[20];
    char str2[20];
    char str3[20];

    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);

    int len1,len2,len3;

    len1=strlen(str1);
    len2=strlen(str2);
    len3=strlen(str3);

    if(len1>len2&&len1>len3){
        if(len2>len3){
            printf("%d",len1-len3);
        }
        else{
            printf("%d",len1-len2);
        }
    }
    else if(len2>len1&&len2>len3){
        if(len1>len3){
            printf("%d",len2-len3);
        }
        else{
            printf("%d",len2-len1);
        }
    }
    if(len3>len2&&len3>len1){
        if(len2>len1){
            printf("%d",len3-len1);
        }
        else{
            printf("%d",len3-len2);
        }
    }
    return 0;

}