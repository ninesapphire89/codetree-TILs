#include <stdio.h>

int main() {
    int arr[9];
    for(int i=0;i<10;i++){
        scanf("%d ",&arr[i]);
    }
    int sum=arr[2]+arr[4]+arr[9];
    printf("%d",sum);
    return 0;
}