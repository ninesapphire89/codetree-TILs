#include <stdio.h>

int main() {
    int am,ae,bm,be;
    scanf("%d %d\n%d %d",&am,&ae,&bm,&be);
    printf("%d",am>bm && ae>be);
    return 0;
}