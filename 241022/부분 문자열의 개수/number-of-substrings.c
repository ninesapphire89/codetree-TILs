#include <stdio.h>
#include <string.h>

int main() {
    
    char str[1000], target[2];

    scanf("%s",str);
    scanf("%s",target);

    int str_len = strlen(str);
    int target_len = strlen(target);

    int num = 0;

    for(int i=0;i<str_len;i++){
        for(int j=0;j<target_len;j++){
            if(str[i+j]==target[j]&&str[i+j+1]==target[j+1]){
                num++;
            }
        }
    }

    printf("%d",num);

    return 0;
}