#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char line[101];
    scanf("%s",line);

    int len = strlen(line);
    char result[101];

    for(int i =0;i<len;i++){
        if((int)'A'<=(int)line[i]&&(int)line[i]<=(int)'z'){
            printf("%c",toupper(line[i]));
        }
    }

    return 0;
}