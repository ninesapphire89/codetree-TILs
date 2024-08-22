#include <stdio.h>

int main() {
    int n;
    int m=0;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i])
            min=arr[i];
    }
    for(int i=0;i<n;i++){
        if(min==arr[i])
            m++;
    }
    printf("%d %d",min,m);
    return 0;
}