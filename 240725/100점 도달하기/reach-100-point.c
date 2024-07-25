#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i=n;i<=100;i++){
        if (i<60){
            printf("F ");
        }
        else if (i<70){
            printf("D ");
        }    
        else if (i<80){
            printf("C ");
        }
        else if (i<90){
            printf("B ");
        }
        else 
            printf("A ");
    }

    return 0;
}