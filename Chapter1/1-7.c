// 문제 1-7
// int형 변수 선언 시 실숫값으로 이를 초기화(예를 들면 3.14나 5.7 등)하면 어떻게 될까? 프로그램을 작성하여 확인해보자.

#include <stdio.h>

int main(void) {
	int vx = 3.14;
	int vy = 5.7;
	int x;

	printf("vx의 값은 %d입니다.\n", vx);
	printf("vy의 값은 %d입니다.\n", vy);

	return 0;
}
