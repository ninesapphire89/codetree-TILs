#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    
    bool ee = false;
    bool ab = false;

    char str[20];
    scanf("%s",str);

    int a = strlen(str);

    for(int i=0;i<(a-1);i++){
        if(str[i]=='e'&&str[i+1]=='e'){
            ee = true;
        }
        if(str[i]=='a'&&str[i+1]=='b'){
            ab = true;
        }
    }

    if(ee = true){
        printf("Yes ");
    }
    else{
        printf("No ");
    }

    if(ab = true){
        printf("Yes ");
    }
    else{
        printf("No ");
    }

    return 0;
}