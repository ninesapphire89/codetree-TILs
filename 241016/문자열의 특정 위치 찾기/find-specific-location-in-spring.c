#include <stdio.h>
#include <string.h>

int main() {
    
    char str[30];
    char a;

    scanf("%s",str);
    scanf(" %c",&a);

    int len = strlen(str);

    int str_index = -1;

    for(int i=0;i<(len-1);i++){
        if(str[i]==a){
            str_index = i;
            break;
        }
    }

    if(str_index == -1){
        printf("No");
    }
    else{
        printf("%d",str_index);
    }

    return 0;
}