// 문제 1-12
// 읽어 들인 정숫값 3개의 합을 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int n1, n2, n3;
	int add;

	puts("3개의 정숫값을 입력하세요.");
	printf("정수 1 : "); scanf("%d", &n1);
	printf("정수 2 : "); scanf("%d", &n2);
	printf("정수 3 : "); scanf("%d", &n3);

	add = n1 + n2 + n3;

	printf("이 세 값의 합은 %d입니다.\n", add);

	return 0;
}

// = printf("이 세 값의 합은 %d입니다.\n", n1 + n2 + n3);
