#include <stdio.h>

int main() {
    int ae,am,be,bm;
    scanf("%d %d\n%d %d",&am,&ae,&bm,&be);
    if (am>bm){
        printf("A");
    }    
    else if (am<bm){
        printf("B");
    }
    else if (am==bm&&ae>be)
        printf("A");
    else 
        printf("B");
    return 0;
}