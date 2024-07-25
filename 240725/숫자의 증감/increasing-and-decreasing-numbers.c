#include <stdio.h>

int main() {
    char c;
    int n;
    scanf("%c %d",&c,&n);
    if (c=='A'){
        for(int i=1;i<=n;i++){
            printf("%d ",i);
        }
    }
    if (c=='D'){
        for(int x=n;x>=1;x--){
            printf("%d ",x);
        }
    }
    return 0;
}