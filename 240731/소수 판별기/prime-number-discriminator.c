#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    scanf("%d",&n);
    bool thtn = true;
    for(int i=2;i<n;i++){
        if (n%i==0){
            thtn = false;
        }
    }
    if(thtn==false){
        printf("C");
    }
    else{
        printf("P");
    }
    return 0;
}