#include <stdio.h>

int main() {
    
    char n;
    scanf("%c",&n);

    if(n=='a'){
        printf("a");
    }
    else{
        printf("%c",n-1);
    }
    return 0;
}