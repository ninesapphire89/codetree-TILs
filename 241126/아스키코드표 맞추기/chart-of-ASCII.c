#include <stdio.h>

int main() {
    int a[5];
    char b[5];

    for(int i = 0;i<5;i++){
        scanf("%d",&a[i]);
        b[i]= (char)a[i];
        printf("%c ",b[i]); 
    }

    return 0;
}