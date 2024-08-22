#include <stdio.h>

int main() {
    int n;
    int count = 0;
    int position = -1;
    
    // 입력 받기
    scanf("%d", &n);
    
    int numbers[n];
    
    // 숫자 배열 입력 받기
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // 숫자 2가 몇 번째로 등장하는지 찾기
    for (int i = 0; i < n; i++) {
        if (numbers[i] == 2) {
            count++;
            if (count == 3) {
                position = i + 1; // 위치는 1부터 시작하므로 i + 1
                break;
            }
        }
    }
    
    // 결과 출력
    if (position != -1) {
        printf("%d\n", position);
    } 
    return 0;
}