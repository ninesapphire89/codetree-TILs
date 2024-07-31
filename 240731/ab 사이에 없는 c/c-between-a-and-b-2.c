#include <stdio.h>
#include <stdbool.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    bool of = false;
    for (int i=a;i<=b;i++){
        if (c%i!=0){
            of = true;
        }
    }
    if(of==true){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}