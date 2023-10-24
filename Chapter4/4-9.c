// 문제 4-9
// 양의 정숫값을 읽어 들여 그 수의 개수만큼 *를 연속으로 가로로 나열해 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int no;

	printf("양의 정수 : ");
	scanf("%d", &no);

	if (no >= 1) {
		while (no-- > 0)
			putchar('*');
		putchar('\n');
	}

	return 0;
}

// 문자 상수(character constant): '*'나 '\n'처럼 작은따옴표 ''로 감싼 것
/* 문자 상수 '*': 단일 문자 *를 나타냄
   문자열 리터널 '*': 문자 *만으로 구성되는 문자열을 나타냄 */
