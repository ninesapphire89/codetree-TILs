#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    char tg;
    scanf("%[^\n]",str);
    scanf("%s",&tg);

    int num=0;

    for(int i=0;i<101;i++){
        if(str[i]==tg){
            num++;
        }
    }

    printf("%d",num);

    return 0;
}