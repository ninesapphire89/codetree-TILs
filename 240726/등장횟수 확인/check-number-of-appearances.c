#include <stdio.h>

int main() {
    int a,f=0;
    for (int i=1;i<=5;i++){
        scanf("%d",&a);
        if (a%2==0){
            f++;
        }
    }
    printf("%d",f);
    return 0;
}