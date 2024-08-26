#include <stdio.h>

int main() {
    int arr[9];
    int over=1000,below=0;
    for(int i=0;i<10;i++){
        scanf("%d ",&arr[i]);
        if(arr[i]>500&&over>+arr[i]){
            over=arr[i];
        }
        else if(500>arr[i]&&arr[i]>below){
            below=arr[i];
        }
    }
    printf("%d %d",below,over);
    return 0;
}