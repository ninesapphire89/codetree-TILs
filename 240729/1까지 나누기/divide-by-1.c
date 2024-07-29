#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=5000;i++){
        n/=i;
        if (n<=1){
            printf("%d",i);
            break;
        }
    }
    return 0;
}