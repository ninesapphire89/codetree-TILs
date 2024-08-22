#include <stdio.h>

int main() {
    int arr[100];
    int m=0;
    for(int i=0;i<100;i++){
        scanf("%d ",&arr[i]);
        m++;
        if(arr[i]==999||arr[i]==-999){
            break;
        }
    }
    int max=arr[0],min=arr[0];
    for(int i=0;i<m-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d %d",max,min);
    return 0;
}