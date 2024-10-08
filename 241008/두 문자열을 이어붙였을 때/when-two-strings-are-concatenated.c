#include <stdio.h>
#include <string.h>

int main() {
    char A[101]; // 최대 길이 100 + 널 종료 문자
    char B[101];

    // 문자열 입력
    scanf("%s", A); // %100s를 사용하여 최대 100자까지 입력
    scanf("%s", B);

    // A+B와 B+A를 저장할 배열
    char AB[201]; // 최대 200자 + 널 종료 문자
    char BA[201];

    // A+B 문자열 만들기
    strcpy(AB, A);
    strcat(AB, B);

    // B+A 문자열 만들기
    strcpy(BA, B);
    strcat(BA, A);

    // 두 문자열 비교
    if (strcmp(AB, BA) == 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}