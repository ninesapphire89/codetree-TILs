#include <stdio.h>

int main() {
    int arr[10];
    int sum=0,cnt=0;
    double avg;
    for(int i=0;i<10;i++){
        scanf("%d ",&arr[i]);
        if(arr[i]==0)
            break;
        sum+=arr[i];
        cnt++;
    }
    avg=(double)sum/cnt;
    printf("%d %.1lf",sum,avg);

    return 0;
}