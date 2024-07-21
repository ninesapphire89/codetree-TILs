#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a==12||a<=2){
        printf("Winter");
    }
    else if (a>=9){
        printf("Fall");
    }
    else if (a>=6){
        printf("Summer");
    }
    else {
        printf("Spring");
    }
    return 0;
}