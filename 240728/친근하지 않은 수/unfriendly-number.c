#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    for (int i=1;i<=n;i++){
        if (i%2==0||i%3==0||i%5==0){
            continue;
        }
        sum++;
    }
    printf("%d",sum);
    return 0;
}