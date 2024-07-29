#include <stdio.h>

int main() {
    while(1){
        int a;
        scanf("%d\n",&a);
        if (a==1)
            printf("John\n");
        if (a==2)
            printf("Tom\n");
        if (a==3)
            printf("Paul\n");
        if (a==4)
            printf("Sam\n");
        if (a>=5){
            printf("Vacancy");
            break;
        }
    }
    return 0;
}