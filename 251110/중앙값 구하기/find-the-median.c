#include <stdio.h>

int main() {
    
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
        if(b>c){
            printf("%d",b);
        }
        else if(c>b){
           if(a>c){
            printf("%d",c);
           }
           else{
            printf("%d",a);
           }
        }
    }
    else if(b>c){
        if(c>a){
            printf("%d",c);
        }
        else if(a>c){
           if(b>a){
            printf("%d",a);
           }
           else{
            printf("%d",b);
           }
        }
    }
    else if(c>a){
        if(a>b){
            printf("%d",a);
        }
        else if(b>a){
           if(c>b){
            printf("%d",b);
           }
           else{
            printf("%d",c);
           }
        }
    }

    return 0;
}