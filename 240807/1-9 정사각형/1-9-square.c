#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int cnt=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",cnt);
            cnt++;
            if(cnt==10){
                cnt-=9;
            }
        }
        printf("\n");
    }
    return 0;
}