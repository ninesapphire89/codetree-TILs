#include <stdio.h>

int main() {
    int n;

    scanf("%d\n",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }

    int n1=arr[0],n2=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>n2){
            if(arr[i]>n1){
                n1=arr[i];
            }
            else{
                n2=arr[i];
            }
        }
    }
    printf("%d %d",n1,n2);
    return 0;
}