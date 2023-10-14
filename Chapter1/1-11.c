// 문제 1-11
// 읽어 들인 정숫값 2개의 곱을 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int n1, n2;
	int dup;

	puts("2개의 정숫값을 입력하세요.");
	printf("정수 1 : "); scanf("%d", &n1);
	printf("정수 2 : "); scanf("%d", &n2);

	dup = n1 * n2;

	printf("이 두 값의 곱은 %d입니다.\n", dup);

	return 0;
}

/* int n1, n2; = int n1;
                 int n2;
   -> 각 줄에 변수를 하나씩 쓰면 각 선언에 대해 주석을 표시하기 쉽고 선언 추가나 삭제도 간편하다.
      단, 프로그램 줄 수가 늘어나므로 상황에 따라 구분해서 사용하는 것이 좋다. */

// = printf("이 두 값의 곱은 %d입니다.\n", n1 * n2);
