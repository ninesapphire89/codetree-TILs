#include <stdio.h>

int main() {
    // 변수 선언:
    int n;
    
    // 입력받기
    scanf("%d", &n);
    
    int numbers[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // 가장 작은 차이 값을 찾기 위해 초기값을 충분히 큰 값으로 설정
    int min_diff = 100; // 주어진 문제의 제약 조건에 따라 최대 차이는 100을 초과할 수 없음
    
    // 인접한 두 숫자 간의 차이 중 최소값을 찾기
    for (int i = 0; i < n - 1; i++) {
        int diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
        }
    }
    
    // 결과 출력
    printf("%d\n", min_diff);
    return 0;
}