#include <stdio.h>

int main() {
    int arr_a[3][3];
    int arr_b[3][3];
    int arr_c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d ",&arr_a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d ",&arr_b[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr_c[i][j]=arr_a[i][j]*arr_b[i][j];
            printf("%d ",arr_c[i][j]);
        }
        printf("\n");
    }
    return 0;
}