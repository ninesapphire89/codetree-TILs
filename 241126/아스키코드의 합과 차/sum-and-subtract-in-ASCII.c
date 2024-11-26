#include <stdio.h>

int main() {
    
    char a,b;

    scanf(" %c %c",&a,&b);

    int a_1 = (int)a;
    int b_1 = (int)b;

    int plus = a_1 + b_1;
    int min;

    if(a_1>b_1){
        min = a_1-b_1;
    }
    else{
        min = b_1 - a_1;
    }

    printf("%d %d",plus,min);

    return 0;
}