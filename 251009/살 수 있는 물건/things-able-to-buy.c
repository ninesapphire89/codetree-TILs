#include <stdio.h>

int main() {
    
    int m;

    scanf("%d",&m);

    if(m>=3000){
        printf("book");
    }
    else if(m>=1000){
        printf("mask");
    }
    else{
        printf("no");
    }


    return 0;
}