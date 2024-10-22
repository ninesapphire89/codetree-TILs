#include <stdio.h>
#include <string.h>

int count_substring_occurrences(const char *A, const char *B) {
    int count = 0;
    int lenA = strlen(A);
    int lenB = strlen(B);
    
    for (int i = 0; i <= lenA - lenB; i++) {
        if (strncmp(&A[i], B, lenB) == 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char A[1001]; // A의 최대 길이 1000 + 널 종료 문자
    char B[3];    // B의 길이는 2 + 널 종료 문자

    // 입력 받기
    scanf("%s", A);
    scanf("%s", B);
    
    // 결과 출력
    int result = count_substring_occurrences(A, B);
    printf("%d\n", result);

    return 0;
}