#include <stdio.h>
#define MIN_NUM 1000

int main() {
    // 변수 선언:
    int n;
    int price[MIN_NUM];

    // 입력:
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &price[i]);

    // 배열을 앞에서부터 순회하며 사는 시점의 후보를 선택합니다
    int min = 10;
    for(int i = 0; i < n; i++) {
        // 사는 시점의 다음 해부터 순회하며 파는 시점의 후보를 선택합니다
        for(int j = i + 1; j < n; j++) {
			int profit = price[j] - price[i];
            
            if(min > profit)
                min = profit;
        }
    }

    printf("%d", min);
	
    return 0;
}