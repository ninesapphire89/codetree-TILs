#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);

    int arr[m][n];

    for(int i=0;i<m;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        arr[a][b]=1;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}