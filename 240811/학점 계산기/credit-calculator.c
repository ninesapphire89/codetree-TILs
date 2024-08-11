#include <stdio.h>

int main() {
    int n;
    double sum=0;
    double g=0;
    double arr[100];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%lf ",&arr[i]);
        sum+=arr[i];
        g++;
    }
    printf("%.1lf\n",sum/g);
    if(sum/g<3){
        printf("Poor");
    }
    else if(sum/g<4){
        printf("Good");
    }
    else{
        printf("Perfect");
    }
    return 0;
}