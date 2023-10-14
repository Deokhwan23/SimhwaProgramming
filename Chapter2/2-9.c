// 문제 2-9
// 상숫값 2개를 읽어 들여 앞의 값이 뒤의 값의 몇 %인가를 실수로 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	double a, b;

	puts("2개의 실수를 입력하세요.");
	printf("실수 a : "); scanf("%lf", &a);
	printf("실수 b : "); scanf("%lf", &b);

	printf("a값은 b의 %f%%입니다.", a/b*100);

	return 0;
}

// 나머지를 구하는 %연산자는 그 성격상 정수끼리의 연산에만 이용할 수 있으므로 부동소수점수의 연산에는 이용할 수 없다.
