#include <stdio.h>

int main() {
    
    int n;
    int a;

    scanf("%d",&n);
    scanf("%d",&a);

    if(n==0){
        if(a>=19){
            printf("MAN");
        }
        else{
            printf("BOY");
        }
    }
    else{
        if(a>=19){
            printf("WOMAN");
        }
        else{
            printf("GIRL");
        }
    }

    return 0;
}