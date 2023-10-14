// 문제 1-8
// 입력한 정숫값에 12를 더한 값을 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int no;

	printf("정수값을 입력하세요 : ");
	scanf("%d", &no);

	printf("%d에 12를 더하면 ", no);
	printf("%d입니다.\n", no+12);

	return 0;
}

/* scanf 함수: 입력한 값을 읽는 함수
   *scanf 함수로 읽어 들일 때는 변수명 앞에 &를 붙여야 한다. */
