#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int num=i;
        for(int j=0;j<n;j++){
            printf("%d ",num);
            num+=n;
        }
        printf("\n");
    }
    return 0;
}