#include <stdio.h>

int main() {
    int n;
    int fy=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%4==0){
            fy++;
        }
        if(i%100==0&&n%400!=0){
            fy--;
        }
    }
    printf("%d",fy);
    return 0;
}