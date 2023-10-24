// 문제 4-10
// 정숫값을 읽어 들여 그 값 개수만큼 *를 세로로 연속 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int i, no;

	printf("양의 정수: ");
	scanf("%d", &no);

	while (no-- > 0)
		puts("*");

	return 0;
}

// puts 함수를 이용하므로 출력과 줄 바꿈을 한 번에 수행한다.
