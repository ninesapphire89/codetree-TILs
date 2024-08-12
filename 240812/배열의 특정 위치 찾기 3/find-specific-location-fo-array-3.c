#include <stdio.h>

int main() {
    int arr[100];
    int n=0;
    for(int i=0;i<101;i++){
        scanf("%d ",&arr[i]);
        if(arr[i]==0)
            break;
        n++;
    }
    int sum=arr[n-1]+arr[n-2]+arr[n-3];
    printf("%d",sum);
    return 0;
}