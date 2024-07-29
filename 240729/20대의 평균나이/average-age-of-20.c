#include <stdio.h>

int main() {
    int sum=0;
    int i=0;
    double avg;
    while(1){
        int a;
        scanf("%d\n",&a);
        if(a<20||a>29){
            break;
        }
        sum+=a;
        i++;
    }
    avg=(double)sum/i;
    printf("%.2lf",avg);
    return 0;
}