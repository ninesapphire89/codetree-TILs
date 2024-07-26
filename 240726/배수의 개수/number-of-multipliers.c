#include <stdio.h>

int main() {
    int t=0;
    int f=0;
    int a;
    for(int i=1;i<=10;i++){
        scanf("%d\n",&a);
        if (a%3==0){
            t++;
        }
        if (a%5==0){
            f++;
        }
    }
    printf("%d %d",t,f);
    return 0;
}