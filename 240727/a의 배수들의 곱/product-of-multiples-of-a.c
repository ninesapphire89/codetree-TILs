#include <stdio.h>

int main() {
    int a,b;
    int sum=1;
    scanf("%d %d",&a,&b);
    for (int i=1;i<=b;i++){
        if (i%a==0){
            sum*=i;
        }
    }
    printf("%d",sum);
    return 0;
}