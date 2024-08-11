#include <stdio.h>

int main() {
    int s,e;
    int wjd=0;
    scanf("%d %d",&s,&e);
    for(int i=s;i<=e;i++){
        int sum=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                sum++;
            }
        }
        if(sum==3){
            wjd++;
        }
    }
    printf("%d",wjd);
    return 0;
}