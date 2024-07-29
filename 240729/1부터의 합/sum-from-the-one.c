#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    int a=1;
    for (int i=1;i<=100;i++){
        sum+=i;
        if (sum>=n){
            break;
        }
        a++;
    }
    printf("%d",a);
    return 0;
}