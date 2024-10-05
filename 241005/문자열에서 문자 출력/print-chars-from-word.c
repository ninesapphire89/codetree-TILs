#include <stdio.h>

int main() {
    char arr[10];
    scanf("%s",arr);
    for(int i=0;i<10;i++){
        if(arr[i]!='\0'){
            printf("%c\n",arr[i]);
        }
    }
    return 0;
}