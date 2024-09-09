#include <stdio.h>

int main() {
    int n, m;
    int grid[10][10] = {0};  // 최대 10x10 크기의 격자, 초기값은 모두 0

    // n과 m을 입력 받음
    scanf("%d %d", &n, &m);

    // m개의 점을 입력받아 해당하는 위치에 값을 채워넣음
    for (int i = 0; i < m; i++) {
        int row, col;
        scanf("%d %d", &row, &col);
        grid[row - 1][col - 1] = row * col;  // 행과 열 번호를 1부터 시작하므로 -1로 인덱스 맞춤
    }

    // n x n 격자 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}