#include <stdio.h>

int main() {
    int n;
    int arr[n];
    int con=0,tns=0;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        scanf("%d ",&arr[i]);
        tns++;
        if(arr[i]==2){
            con++;
        }
        if(con==3){
            printf("%d",tns);
            break;
        }
    }

    return 0;
}