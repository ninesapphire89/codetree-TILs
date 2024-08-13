#include <stdio.h>

int main() {
    int arr[100], n;
    int cnt=0;
    scanf("%d",&n);
    for(int i=0;i<100;i++){
        arr[i]=(i+1)*n;
        if(arr[i]%5==0){
            cnt++;
        }
        printf("%d ",arr[i]);
        if(cnt==2)
            break;
    }
    return 0;
}