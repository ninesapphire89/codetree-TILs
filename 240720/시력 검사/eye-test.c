#include <stdio.h>

int main() {
    double a,b;
    scanf("%lf %lf",&a,&b);
    if (a>=1&&b>=1){
        printf("High");
    }
    else if(a>=0.5&&b>=0.5){
        printf("Middle");
    }
    else{
        printf("Low");
    }
    return 0;
}