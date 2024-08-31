#include <stdio.h>

int main() {
    int n,m,a,b;
    scanf("%d %d",&n,&m);

    int arr[a][b] = {};
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=num;
            num++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<0;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}