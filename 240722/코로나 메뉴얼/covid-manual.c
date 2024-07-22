#include <stdio.h>

int main() {
    char c1, c2, c3;
    int t1, t2, t3;
    
    scanf(" %c %d", &c1, &t1);
    scanf(" %c %d", &c2, &t2);
    scanf(" %c %d", &c3, &t3);
    
    // A가 2명 이상인지 판단하기
    if(c1 == 'Y' && t1 >= 37) {
        // 첫 번째 사람이 A라면, 남은 두 사람 중 한 사람이라도 A면 됩니다.
        if((c2 == 'Y' && t2 >= 37) || (c3 == 'Y' && t3 >= 37))
            printf("E");
        else
            printf("N");
    }
    else {
        // 첫 번째 사람이 A가 아니라면, 남은 두 사람 모두 A여야만 합니다.
        if((c2 == 'Y' && t2 >= 37) && (c3 == 'Y' && t3 >= 37))
            printf("E");
        else
            printf("N");
    }
        printf("N");
    return 0;
}