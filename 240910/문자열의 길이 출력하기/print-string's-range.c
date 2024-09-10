#include <stdio.h>
#include <string.h> 
int main() {
    char str[100];
    scanf("%s",str);
    int len;
    len+=strlen(str);
    scanf("\n%s",str);
    len+=strlen(str);
    printf("%d",len);
    return 0;
}