#include <stdio.h>

int main() {
    int a,b;
    char s1,s2;
    scanf("%d %c\n%d %c",&a,&s1,&b,&s2);
    if ((a>=19&&s1=='M')||(b>=19&&s2=='M'))
        printf("1");
    else 
        printf("0");
    return 0;
}