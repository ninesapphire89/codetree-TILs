#include <stdio.h>

int main() {
    int arr[9];
    int sum=0,avg_1=0;
    double avg;
    for(int i=0;i<10;i++){
        scanf("%d ",&arr[i]);
        if(arr[i]<250){
            sum+=arr[i];
            avg_1++;
        }
        else{
            break;
        }
    }
    avg=(double)sum/avg_1;
    printf("%d %.1lf",sum,avg);
    return 0;
}