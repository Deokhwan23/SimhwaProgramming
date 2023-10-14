// 문제 2-4
// 정숫값 2개를 읽어 들여 그 합과 곱을 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int a, b;

	puts("2개의 정숫값을 입력하세요.");
	printf("정수 a : "); scanf("%d", &a);
	printf("정수 b : "); scanf("%d", &b);

	printf("두 값의 합은 %d이고 곱은 %d입니다.", a+b, a*b);

	return 0;
}

/* printf("두 값의 합은 %d이고 곱은 %d입니다.", a+b, a*b);
   (첫 번째 형식 지정자 %d: 제2인수, 두 번째 형식 지정자 %d: 제3인수) */
