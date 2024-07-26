#include <stdio.h>

int main() {
    int a,b;
    int sum=0,n=0;
    double avg;
    scanf("%d %d",&a,&b);
    for (int i=a;i<=b;i++){
        if (i%5==0||i%7==0){
            n++;
            sum+=i;
        }
    }
    avg=(double)sum/n;
    printf("%d %.1lf",sum,avg);
    return 0;
}