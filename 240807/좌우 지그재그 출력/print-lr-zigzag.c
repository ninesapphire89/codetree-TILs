#include <stdio.h>

int main() {
    int n;
    int cnt=1;
    int cny=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                printf("%d ",cnt);
                cnt++;
            }
            else{
                printf("%d ",(i+2)*n-cnt+1);
                cnt++;
            }
        }
        printf("\n");
    }
    return 0;
}