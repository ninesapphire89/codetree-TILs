#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 101  // 문자열의 최대 길이

// 공백을 제거하는 함수 (문자열의 길이를 반환)
int removeSpaces(char *str, char *result) {
    int length = 0;
    while (*str) {
        if (*str != ' ') {
            result[length++] = *str;
        }
        str++;
    }
    result[length] = '\0';  // 결과 문자열의 끝을 표시
    return length;          // 공백이 제거된 문자열의 길이 반환
}


int main() {
    
    char line1[MAX_LENGTH];
    char line2[MAX_LENGTH];
    char result[MAX_LENGTH * 2];  // 두 줄을 결합할 공간을 확보

    // 첫 번째 줄 입력
    fgets(line1, sizeof(line1), stdin);
    // 두 번째 줄 입력
    fgets(line2, sizeof(line2), stdin);

    // 문자열에서 개행 문자 제거
    if (line1[strlen(line1) - 1] == '\n') {
        line1[strlen(line1) - 1] = '\0';
    }
    if (line2[strlen(line2) - 1] == '\n') {
        line2[strlen(line2) - 1] = '\0';
    }

    char tempResult[MAX_LENGTH];
    int length1, length2;

    // 첫 번째 줄의 공백 제거
    length1 = removeSpaces(line1, tempResult);
    // 두 번째 줄의 공백 제거
    length2 = removeSpaces(line2, tempResult + length1);
    
    // 두 결과를 결합
    tempResult[length1 + length2] = '\0';
    strcpy(result, tempResult);

    // 결과 출력
    printf("%s", result);
    return 0;
}