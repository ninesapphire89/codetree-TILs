#include <stdio.h>
#include <string.h>

int main() {
    
    int a;
    scanf("%d",&a);

    char str[20][20];
    for(int i=1;i<=a;i++){
        scanf("%s",str[i]);
    }

    char let;
    scanf(" %c",&let);

    int num=0;
    int len=0;

    for(int i=1;i<=a;i++){
        if(str[i][0]==let){
            num++;
            len+=strlen(str[i]);
        }
    }

    double sum = (double)len/num;

    printf("%d %.2f",num,sum);

    return 0;
}