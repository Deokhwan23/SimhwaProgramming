// 문제 3-5
/* 정숫값 2개를 읽어 들여 이들 값이 같으면 "A와 B는 같습니다."
   A가 크면 "A는 B보다 큽니다.", B가 크면 "A는 B보다 작습니다." 라고 출력하는 프로그램을 작성하자. */

#include <stdio.h>

int main(void) {
	int a, b;

	puts("2개의 정수를 입력하세요.");
	printf("정수 A : "); scanf("%d", &a);
	printf("정수 B : "); scanf("%d", &b);

	if (a == b)
		puts("A와 B는 같습니다.");
	else if (a > b)
		puts("A가 B보다 큽니다.");
	else
		puts("A가 B보다 작습니다.");

	return 0;
}
