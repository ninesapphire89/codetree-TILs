#include <stdio.h>

int main() {
    int arr[10][10] = {0,};
	
	// n, m을 입력받습니다.
	int n, m;
	scanf("%d %d", &n, &m);
	
	// m회에 걸쳐 동전의 위치를 입력받고 올바른 위치에 1을 표기합니다.
	for(int i = 0; i < m; i++) {
		int r, c;
		scanf("%d %d", &r, &c);
		arr[r][c] = 1;
	}
			
	// 채워진 배열을 출력합니다.
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
    return 0;
}