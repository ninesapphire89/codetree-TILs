#include <stdio.h>

int main() {
    int arr[100];
    scanf("%d %d",&arr[0],&arr[1]);
    printf("%d %d ",arr[0],arr[1]);
    for(int i=2;i<10;i++){
        arr[i]=arr[i-1]+2*arr[i-2];
        printf("%d ",arr[i]);
    }
    return 0;
}