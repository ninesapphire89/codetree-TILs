#include <stdio.h>

int main() {
    int n;
    int cnt=0;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        int arr[4];
        int avg=0;
        for(int j=0;j<4;j++){
            scanf("%d ",&arr[j]);
            avg+=arr[j];
        }
        if((avg/4)<60){
            printf("fail");
        }
        else{
            printf("pass");
            cnt++;
        }
        printf("\n");
    }
    printf("%d",cnt);
    return 0;
}