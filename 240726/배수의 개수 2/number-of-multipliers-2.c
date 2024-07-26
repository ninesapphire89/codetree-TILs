#include <stdio.h>

int main() {
    int cnt=0;
    for(int i=1;i<=10;i++){
        int a;
        scanf("%d\n",&a);
        if (a%2==1){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}