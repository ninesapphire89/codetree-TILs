#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int arr[5][5];

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==0||j==0||i==j){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}