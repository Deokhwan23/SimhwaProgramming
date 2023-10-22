// 문제 3-7
// 정숫값 3개를 읽어 들인 다음, 그중 최솟값을 구해 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int n1, n2, n3, min;

	puts("3개의 정수를 입력하세요.");
	printf("정수 1 : "); scanf("%d", &n1);
	printf("정수 2 : "); scanf("%d", &n2);
	printf("정수 3 : "); scanf("%d", &n3);

	min = n1;
	if (n2 < min)
		min = n2;
	if (n3 < min)
		min = n3;

	printf("최솟값은 %d입니다.\n", min);

	return 0;
}

/* 세 값 중 최솟값을 구하는 절차
   1. min에 n1의 값을 그대로 대입한다.
   2. min보다 n2가 작으면 min에 n2를 대입한다.
      *n2가 min 이상이면 대입을 수행하지 않는다.
   3. min보다 n3이 작으면 min에 n3을 대입한다.
      *n3이 min 이상이면 대입을 수행하지 않는다. */
