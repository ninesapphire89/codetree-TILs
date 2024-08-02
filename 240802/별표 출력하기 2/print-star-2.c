#include <stdio.h>

int main() {
    int n;
	scanf("%d", &n);

	// 길이가 n인 직각삼각형을 출력합니다.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - i; j++)
			printf("* ");
		printf("\n");
	}
    return 0;
}