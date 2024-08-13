#include <stdio.h>

int main() {
    int arr[100];
    arr[0]=1;
    scanf("%d",&arr[1]);
    printf("%d %d ",arr[0],arr[1]);
    for(int i=2;i<100;i++){
        arr[i]=arr[i-1]+arr[i-2];
        printf("%d ",arr[i]);
        if(arr[i]>100)
            break;
    }

    return 0;
}