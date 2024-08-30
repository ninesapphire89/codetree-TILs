#include <stdio.h>

int main() {
    int arr_[4][4];
    int sum=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d ",&arr_[i][j]);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            sum+=arr_[i][j];
        }
    }
    printf("%d ",sum);
    return 0;
}