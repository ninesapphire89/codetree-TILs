#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    scanf("%s",str);
    str[1]='a';

    int len = strlen(str);

    str[len-2]='a';

    printf("%s",str);

    return 0;
}