#include <stdio.h>

int main() {

    int arr[10][10]={0,};

    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        arr[a][b] = i;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}