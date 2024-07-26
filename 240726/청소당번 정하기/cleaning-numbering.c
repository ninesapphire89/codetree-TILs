#include <stdio.h>

int main() {
    int c=0,f=0,t=0;
    int d;
    scanf("%d",&d);
    for(int i=1;i<=d;i++){
        if(i%12==0&&i%2==0&&i%3==0){
            t++;
        }
        else if(i%2==0&&i%3==0){
            f++;
        }
        else if(i%2==0){
            c++;
        }
        else if(i%3==0){
            f++;
        }
    }
    printf("%d %d %d",c,f,t);
    return 0;
}