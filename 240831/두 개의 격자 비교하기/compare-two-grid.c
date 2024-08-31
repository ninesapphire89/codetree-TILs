#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr_a[n][m];
    int arr_b[n][m];
    int arr_c[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d ",&arr_a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d ",&arr_b[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr_a[i][j]==arr_b[i][j]){
                arr_c[i][j]=0;
            }
            else{
                arr_c[i][j]=1;
            }
            printf("%d ",arr_c[i][j]);
        }
        printf("\n");
    }
    return 0;
}