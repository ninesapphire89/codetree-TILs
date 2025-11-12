#include <stdio.h>
#include <string.h>

int main() {
 
    char word_1[20];
    char word_2[20];

    scanf("%s",&word_1);
    scanf(" %s",&word_2);

    if(strlen(word_1)>strlen(word_2)){
        printf("%s %d",word_1,strlen(word_1));
    }
    else if(strlen(word_2)>strlen(word_1)){
        printf("%s %d",word_2,strlen(word_2));
    }
    else{
        printf("same");
    }


    return 0;
}