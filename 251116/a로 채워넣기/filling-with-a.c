#include <stdio.h>
#include <string.h>

int main() {
    
    char word[100];

    scanf("%s",word);

    int a = strlen(word);

    word[1]='a';
    word[a-2]='a';

    printf("%s",word);

    return 0;
}