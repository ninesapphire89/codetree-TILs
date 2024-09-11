#include <stdio.h>
#include <string.h>
int main() {
    char str[101];
	
	// 공백을 포함한 문자열을 입력받습니다.
	fgets(str, 101, stdin);
	
	// 소문자 알파벳을 입력받습니다.
	char a;
	scanf(" %c", &a);
	
	// 문자열의 길이를 확인합니다.
	int len = strlen(str);
	int cnt = 0;
	
	// 문자열에서 주어진 알파벳이 몇번 나오는지 확인합니다.
	for(int i = 0; i < len; i++)
		if(str[i] == a)
			cnt++;

	// 주어진 알파벳이 나온 횟수를 출력합니다.
	printf("%d", cnt);
    return 0;
}