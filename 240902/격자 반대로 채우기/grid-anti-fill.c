#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int num=1;

    for(int i=n-1;i>=0;i--){
        if(i%2==(n-1)%2){
            for(int j=n-1;j>=0;j--){
                arr[j][i]=num;
                num++;
            }
        }
        else{
            for(int j=0;j<n;j++){
                arr[j][i]=num;
                num++;
            }
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