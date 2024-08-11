#include <stdio.h>

int main() {
    double arr[7];
    double sum=0;
    double avg,stu=0;
    for(int i=0;i<8;i++){
        scanf("%lf ",&arr[i]);
        sum+=arr[i];
        stu++;
    }
    avg=sum/stu;
    printf("%.1lf",avg);
    return 0;
}