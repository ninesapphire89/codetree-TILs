#include <stdio.h>

int main() {
    int arr[10];
    int even=0,odd=0;
    for(int i=0;i<10;i++){
        scanf("%d ",&arr[i]);
        if(i%2==0){
            odd+=arr[i];
        }
        else{
            even+=arr[i];
        }
    }
    if(odd>=even){
        printf("%d",odd-even);
    }
    else{
        printf("%d",even-odd);
    }

    return 0;
}