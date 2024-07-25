#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if (i%3==0){
            printf("0 ");
        }
        else if(30<=i&&i<40){
            printf("0 ");
        }
        else if(60<=i&&i<70){
            printf("0 ");
        }
        else if(90<=i&&i<100){
            printf("0 ");
        }
        else if(10<i&&i<20){
            if ((i-10)%3==0)
                printf("0 ");
            else    
                printf("%d ",i);
        }
        else if(20<i&&i<30){
            if ((i-20)%3==0)
                printf("0 ");
            else    
                printf("%d ",i);
        }
        else if(40<i&&i<50){
            if ((i-40)%3==0)
                printf("0 ");
            else    
                printf("%d ",i);
        }
        else if(50<i&&i<60){
            if ((i-50)%3==0)
                printf("0 ");
            else    
                printf("%d ",i);
        }
        else if(70<i&&i<80){
            if ((i-70)%3==0)
                printf("0 ");
            else    
                printf("%d ",i);
        }
        else if(80<i&&i<90){
            if ((i-80)%3==0)
                printf("0 ");
            else    
                printf("%d ",i);
        }
        else{
            printf("%d ",i);
        }
    }
    return 0;
}