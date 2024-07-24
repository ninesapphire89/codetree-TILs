#include <stdio.h>

int main() {
    int n;
    int i=1;
    scanf("%d",&n);
    while (3*i<=n){
        printf("%d ",3*i);
        i++;
    }
    return 0;
}