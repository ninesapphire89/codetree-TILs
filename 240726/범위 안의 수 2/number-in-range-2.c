#include <stdio.h>

int main() {
    int sum=0,n=0;
    double avg;
    for(int i=1;i<=10;i++){
        int a;
        scanf("%d",&a);
        if (0<=a&&a<=200){
            sum+=a;
            n++;
        }
    }
    avg=(double)sum/n;
    printf("%d %.1lf",sum,avg);
    return 0;
}