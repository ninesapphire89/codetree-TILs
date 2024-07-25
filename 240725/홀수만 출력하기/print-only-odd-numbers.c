#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int numbers[N];
    
    for (int i = 0; i < N; ++i) {
        scanf("%d", &numbers[i]);
    }
    
    // 홀수이면서 3의 배수인 수들을 순서대로 출력
    for (int i = 0; i < N; ++i) {
        if (numbers[i] % 2 != 0 && numbers[i] % 3 == 0) {
            printf("%d\n", numbers[i]);
        }
    }
    return 0;
}