#include <stdio.h>

int main() {
    int s,t;
    int dhks=0;
    scanf("%d %d",&s,&t);
    for(int i=s;i<=t;i++){
        int cnt=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                cnt+=j;
            }
        }
        if(cnt==i){
            dhks++;
        }
    }
    printf("%d",dhks);
    return 0;
}