#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            for (int m=0;m<n-i;m++){
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}