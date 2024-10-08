#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    char b[20] = "Hello";

    scanf("%s",a);
    

    strcat(a,b);

    printf("%s",a);
    
    return 0;
}