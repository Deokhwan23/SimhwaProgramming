// 문제 3-6
// 등가 연산자나 관계 연산자가 1 또는 0의 값을 생성하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int a, b;

	puts("2개의 정수를 입력하세요.");
	printf("변수 a : "); scanf("%d", &a);
	printf("변수 B : "); scanf("%d", &b);

	puts("등가식의 값");
	printf("a == b의 값 : %d\n", a == b);
	printf("a != b의 값 : %d\n", a != b);

	puts("관계씩의 값");
	printf("a < b의 값 : %d\n", a < b);
	printf("a <= b의 값 : %d\n", a <= b);
	printf("a > b의 값 : %d\n", a > b);
	printf("a >= b의 값 : %d\n", a >= b);

	return 0;
}

/* 등가 연산자와 관계 연산자의 평가: 조건이 성립할 경우 -> int형 1
                          조건이 성립하지 않을 경우 -> int형 0 */
/* 평가(evaluation): 식의 값을 조사하는 겻
   (식에는 극히 일부 예외를 제외하면 값이 있다. 그리고 프로그램 실행 시 그 값을 조사한다.) */
