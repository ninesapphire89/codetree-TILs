#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int cnt=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                printf("  ");
            }
            else{
                printf("%d ",cnt);
                cnt++;
                if(cnt==10){
                    cnt=1;
                }
            }
        }
        printf("\n");
    }
    return 0;
}