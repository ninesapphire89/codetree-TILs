#include <stdio.h>

int main() {
    int n;
    char x ='A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c",x);
            x++;
            if(x=='Z')
                x='A';
        }
        printf("\n");
    }
    return 0;
}