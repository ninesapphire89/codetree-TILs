#include <stdio.h>

int main() {
    int n;
    int d=0;
    scanf("%d",&n);
    while(1){
        if (n != 2){
            n-=2;
            d++;
        }
        else {
            d++;
            break;
        }
    }
    printf("%d",d);
    return 0;
}