#include <stdio.h>

int main() {
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        arr[i]=arr[i]*arr[i];
        printf("%d ",arr[i]);
    }
    return 0;
}