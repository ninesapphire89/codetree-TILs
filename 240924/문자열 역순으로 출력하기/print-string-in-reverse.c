#include <stdio.h>

int main() {
    char arr[4][20];
    for(int i=1;i<5;i++){
        scanf("%s",arr[i]);
    }
    for(int i=4;i>0;i--){
        printf("%s\n",arr[i]);
    }
    return 0;
}