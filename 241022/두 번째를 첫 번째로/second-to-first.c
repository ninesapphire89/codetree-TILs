#include <stdio.h>

int main() {
    char str[100];

    scanf("%s",str);

    char a = str[1];
    char b = str[0];



    for(int i=0;str[i]!='\0';i++){
        if(str[i]==a){
            str[i]=b;
        }
    }

    printf("%s",str);

    return 0;
}