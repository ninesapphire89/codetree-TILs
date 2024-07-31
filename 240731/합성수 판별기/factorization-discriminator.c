#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    bool sat = false;
    scanf("%d",&n);
    for (int i=2;i<=(n-1);i++){
        if (n%i==0){
            sat = true;
        }
    }
    if (sat==true){
        printf("C");
    }
    else {
        printf("N");
    }
    return 0;
}