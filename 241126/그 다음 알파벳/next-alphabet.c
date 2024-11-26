#include <stdio.h>

int main() {

    char n;
    scanf("%c",&n);

    if(n=='z'){
        n='a';
        printf("%c",n);
    }
    else{
        int a = (char)n;
        a=a+1;
        printf("%c",a);
    }

    return 0;
}