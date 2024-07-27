#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int poud=1;
    for(int i=a;i<=b;i++){
        poud*=i;
    }
    printf("%d",poud);
    return 0;
}