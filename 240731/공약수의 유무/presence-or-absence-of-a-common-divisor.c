#include <stdio.h>
#include <stdbool.h>
int main() {
    bool c = false;
    int a,b;
    scanf("%d %d",&a,&b);
    for (int i=a;i<=b;i++){
        if(1920%i==0&&2880%i==0){
            c = true;
        }
    }
    if (c==true){
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}