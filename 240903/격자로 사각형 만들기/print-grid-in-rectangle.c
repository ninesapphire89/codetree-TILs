#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[12][12];

    for(int i=0;i<n;i++){
        arr[i][0]=1;
        arr[0][i]=1;
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            arr[i][j]=arr[i-1][j-1]+arr[i][j-1]+arr[i-1][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}