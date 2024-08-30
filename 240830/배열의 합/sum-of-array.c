#include <stdio.h>

int main() {
    int n;
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            scanf("%d ",&n);
            sum+=n;
        }
        printf("%d\n",sum);
    }
    return 0;
}