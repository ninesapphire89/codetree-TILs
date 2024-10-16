#include <stdio.h>
#include <string.h>

int main() {
    
    char str[20];
    scanf("%s",str);

    int len = strlen(str);

    int ee = 0;
    int eb = 0;

    for(int i=0;i<len-1;i++){
        if(str[i]=='e'&&str[i+1]=='e'){
            ee++;
        }
        if(str[i]=='e'&&str[i+1]=='b'){
            eb++;
        }
    }

    printf("%d %d",ee,eb);

    return 0;
}