#include <stdio.h>

int main() {
    char str[10][100];

    for(int i=1;i<=10;i++){
        scanf("%s",str[i]);
    }
    for(int i=10;i>=0;i--){
        printf("%s\n",str[i]);
    }
    return 0;
}