#include <stdio.h>

int main() {
    int n;
    int c=0;
    scanf("%d",&n);
    while(1){
        if(n%2==0){
            n/=2;
            c++;
        }
        else if (n%2!=0&&n!=1){
            n=n*3+1;
            c++;
        }
        if (n==1){
            break;
        }
    }
    printf("%d",c);
    return 0;
}