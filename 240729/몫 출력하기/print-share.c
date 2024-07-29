#include <stdio.h>

int main() {
    int i=0;
    while(1){
        int a;
    
        scanf("%d\n",&a);
        if (a%2!=0){
            continue;
        }
        
        printf("%d\n",a/2);
         i++;
        
        if (i>=3){
            break;
        }
        }
    return 0;
}