#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int cnt=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2==1){
                printf("%d ",cnt);
                if(cnt%n==0){
                    cnt+=2;
                }
                else{
                    cnt++;
                }
            }
            else{
                printf("%d ",cnt);
                if(cnt%n==0){
                    cnt++;
                }
                else{
                    cnt+=2;
                }
            }
        }
        printf("\n");
    }
    return 0;
}