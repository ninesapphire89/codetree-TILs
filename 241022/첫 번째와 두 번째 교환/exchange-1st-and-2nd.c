#include <stdio.h>
#include <string.h>

int main() {
    
    char str[20];
    scanf("%s",str);

    int len = strlen(str);

    char a[1],b[1];

    a[0] = str[0];
    b[0] = str[1];

    for(int i = 0; i<len;i++){
        if(str[i]==a[0]){
            str[i]=b[0];
        }
        else if(str[i]==b[0]){
            str[i]=a[0];
        }
    }

    printf("%s",str);

    return 0;
}