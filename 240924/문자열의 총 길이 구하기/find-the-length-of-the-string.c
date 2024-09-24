#include <stdio.h>
#include <string.h>

int main() {

    char arr[10][200];

    for(int i=1;i<=10;i++){
        scanf("%s",arr[i]);
    }

    int num = 0;

    for(int i=1;i<=10;i++){
        num+=strlen(arr[i]);
    }
    printf("%d",num);
    return 0;
}