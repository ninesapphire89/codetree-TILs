#include <stdio.h>

int main() {
    int arr[10];
    int cnt=0;
    for(int i=0;i<10;i++){
        scanf("%d ",&arr[i]);
        cnt++;
        if(arr[i]%3==0)
            break;
    }
    printf("%d",arr[cnt-2]);
    return 0;
}