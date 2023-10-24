// 문제 4-17
// 정숫값을 읽어 들여 그 값 이하의 홀수를 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int i, no;

	printf("정숫값: ");
	scanf("%d", &no);

	for (i=1; i<=no; i += 2)
		printf("%d ", i);
	putchar('\n');

	return 0;
}

// 들여쓰기 - 프로그램 구조를 알기 쉽다.
// 인덴트: 여백, 인덴테이션(들여쓰기): 인덴트를 이용해 작성하는 것
