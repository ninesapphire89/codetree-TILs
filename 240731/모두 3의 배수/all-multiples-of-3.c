#include <stdio.h>
#include <stdbool.h>
int main() {
    bool qotn=true;
    for (int i=1;i<=5;i++){
        int a;
        scanf("%d",&a);
        if (a%3!=0){
            qotn=false;
        }
    }
    if (qotn==false){
        printf("0");
    }
    else{
        printf("1");
    }
    return 0;
}