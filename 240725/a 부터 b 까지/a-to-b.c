#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    for (int i=a;i<=b;i+=0){
        if(i%2==0){
            printf("%d ",i);
            i+=3;
        }
        else {
            printf("%d ",i);
            i*=2;
        }
        
    }
    return 0;
}