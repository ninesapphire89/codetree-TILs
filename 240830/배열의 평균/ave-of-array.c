#include <stdio.h>

int main() {
    int arr_[2][4];
    int sum2=0;
    double avg3;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            scanf("%d ",&arr_[i][j]);
            sum2+=arr_[i][j];
        }
    }
    avg3=sum2/8;
    for(int i=0;i<2;i++){
        int sum=0;
        double avg;
        for(int j=0;j<4;j++){
            sum+=arr_[i][j];
        }
        avg=sum/4;
        printf("%.1lf ",avg);
    }
    printf("\n");
    for(int i=0;i<4;i++){
        int sum1=0;
        double avg1;
        for(int j=0;j<2;j++){
            sum1+=arr_[j][i];
        }
        avg1=sum1/2;
        printf("%.1lf ",avg1);
    }
    printf("\n");
    printf("%.1lf",avg3);
    return 0;
}