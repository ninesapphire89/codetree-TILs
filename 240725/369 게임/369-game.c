#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if (i%3==0){
            printf("0 ");
        }
        else if(30<=i&&i<40){
            printf("0 ");
        }
        else if(60<=i&&i<70){
            printf("0 ");
        }
        else if(90<=i&&i<100){
            printf("0 ");
        }
        else{
            printf("%d ",i);
        }
    }
    return 0;
}