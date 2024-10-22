#include <stdio.h>
#include <string.h>

int main() {
    
    char str[1000], target[3];

    scanf("%s",str);
    scanf("%s",target);

    int str_len = strlen(str);

    int num = -1;

    for(int i=0;i<str_len-1;i++){
        for(int j=0;j<2;j++){
            if(str[i+j]==target[j]&&str[i+j+1]==target[j+1]){
                num++;
            }
        }
    }

    printf("%d",num);

    return 0;
}