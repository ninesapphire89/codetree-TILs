#include <stdio.h>

int main() {
    int a,b,c,E,N;
    char as,bs,cs;
    scanf("%c %d\n%c %d\n%c %d",&as,&a,&bs,&b,&cs,&c);
    if (as=='Y'){
        if (a>=37)
            E+=1;
        else 
            N+=1;
    }
    else {
        N+=1;
    }
    if (bs=='Y'){
        if (b>=37)
            E+=1;
        else 
            N+=1;
    }
    else {
        N+=1;
    }
    if (cs=='Y'){
        if (c>=37)
            E+=1;
        else 
            N+=1;
    }
    else {
        N+=1;
    }
    if (E>=2)
        printf("E");
    else
        printf("N");
    return 0;
}