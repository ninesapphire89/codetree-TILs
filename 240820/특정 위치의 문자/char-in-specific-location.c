#include <stdio.h>

int main() {
    char n;
    int idx = -1;
    char word[6]={'L','E','B','R','O','S'};
    scanf("%c",&n);
    for(int i=0;i<6;i++){
        if(word[i]==n)
            idx=i;
    }
    if(idx==-1){
        printf("None");
    }
    else{
        printf("%d",idx);
    }
    return 0;
}