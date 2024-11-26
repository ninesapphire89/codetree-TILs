#include <stdio.h>
#include <string.h>

int main() {
    
    char str[21];
    scanf("%s",str);

    int len = strlen(str);
    int num = 1;

    for(int i=0;i<len;i++){
        if('0'<=str[i]&&str[i]<='9'){
            num++;
        }
    }

    printf("%d",num);

    return 0;
}