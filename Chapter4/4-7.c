// 문제 4-7
// 양의 정숫값을 읽어 들이고, 그 수 이하인 양의 2의 거듭제곱을 순서대로 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int no;

	printf("양의 정수를 입력하세요: ");
	scanf("%d", &no);

	if (no >= 1) {
		int i = 2;
		while (i <= no) {
			printf("%d ", i);
			i *= 2;
		}
		printf("\n");
	}

	return 0;
}

// 2의 거듭제곱 나열
// [문제 4-7]은 2의 거듭제곱을 나열하는 문제다.
// while문의 루프 본체에서는 복합 대입 연산자 *=를 이용하여 반복할 때마다 i값을 2배로 한다.
