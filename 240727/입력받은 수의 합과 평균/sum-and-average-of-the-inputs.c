#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // 합을 구합니다.
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        int score;
        scanf("%d", &score);
        sum += score;
    }
    
    // 평균을 구합니다.
    double avg = (double)sum / n;
    
    printf("%d %.1lf", sum, avg);
    return 0;
}