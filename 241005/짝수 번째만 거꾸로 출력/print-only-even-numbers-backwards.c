#include <stdio.h>
#include <string.h>
int main() {
    char arr[100];
    scanf("%s",arr);
    int a=strlen(arr);

    for(int i=(a-1);i>=0;i--){
        if(i%2==1){
            printf("%c",arr[i]);
        }
    }
    
    return 0;
}