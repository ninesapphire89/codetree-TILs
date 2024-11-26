#include <stdio.h>

int main() {
    
    char a,b;
    
    scanf("%s",a);
    scanf("%s",b);

    int a1 = a;
    int b1 = b;

    int add = a1+b1;
    int min;
    if(a1>b1){
        min = a1-b1;
    }
    else{
        min=b1-a1;
    }

    printf("%d %d",add,min);

    return 0;
}