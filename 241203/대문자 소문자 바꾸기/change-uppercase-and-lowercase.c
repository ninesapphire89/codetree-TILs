#include <stdio.h>
#include <string.h>

int main() {
    
    char str[21];
    scanf("%s",str);
    int len = strlen(str);
    
    int i;

    for(i=0;i<len;i++){
        if((str[i]>='a') && (str[i]<='z')){
            str[i]=str[i]-32;
        }
        else if((str[i]>='A') && (str[i]<='Z')){
            str[i]=str[i]+32;
        }
    }
    str[i]='\0';

    printf("%s",str);

    return 0;
}