// 문제 2-3
// 읽어 들인 정숫값 2개의 비율을 백분율로 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int x, y;

	puts("2개의 정숫값을 입력하세요.");
	printf("정수 x : "); scanf("%d", &x);
	printf("정수 y : "); scanf("%d", &y);

	printf("x 값은 y 값의 %d%%입니다.\n", 100*x/y);

	return 0;
}

/* 계산 순서가 x/y*100이면 x값이 54이고 y값이 84일 때 나눗셈 x/y로 얻은 값은 소수부가 버려져 0이 된다.
   결국 "0%"라고 출력된다. */
