#include <stdio.h>

int main() {
    char x = 'A';
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}