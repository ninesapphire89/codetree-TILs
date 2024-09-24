#include <stdio.h>

int main() {
    
    char str[10][200];

    for(int i = 1; i<=10;i++){
        scanf("%s",str[i]);
    }
    
    for(int i= 1;i<=10;i++){
        if(i%2==1){
            printf("%s\n",str[i]);
        }
    }

    return 0;
}