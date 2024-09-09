#include <stdio.h>

int main() {
    int arr[11][11] = {0,};
	
	// n, m을 입력받습니다.
	int n, m;
	scanf("%d %d", &n, &m);
	
	// m회에 걸쳐 점의 위치를 입력받고 올바른 위치에 점의 크기를 표기합니다.
	for(int i = 0; i < m; i++) {
		int r, c;
		scanf("%d %d", &r, &c);
		arr[r][c] = r * c;
	}
			
	// 채워진 배열을 출력합니다.
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

    return 0;
}