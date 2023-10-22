// 문제 3-12
/* 정숫값 2개를 읽어 들여 이들 값의 차이가 10 이상이면 "두 값의 차이는 11 이상입니다.",
   그렇지 않으면 "두 값의 차이는 10 이하입니다."라고 출력하는 프로그램을 작성하자. */

#include <stdio.h>

int main(void) {
	int a, b, diff;

	puts("2개의 정수를 입력하세요.");
	printf("정수 A : "); scanf("%d", &a);
	printf("정수 B : "); scanf("%d", &b);

	diff = a - b;

	if (diff > 10 || diff < -10)
		puts("두 값의 차이는 11 이상입니다.");
	else
		puts("두 값의 차이는 10 이하입니다.");

	return 0;
}

/* 단락 평가(short circuit evaluation): 논리 연산식의 평가 결과가 왼쪽 피연산자의 평가 결과만으로
                                     명확해질 경우, 오른쪽 피연산자 평가는 수행하지 않는 것 */
