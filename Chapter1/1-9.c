// 문제 1-9
// 읽어 들인 정숫값에서 6을 뺀 값을 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int no;

	printf("정숫값을 입력하세요 : ");
	scanf("%d", &no);

	printf("%d에서 6을 빼면 ", no);
	printf("%d입니다.\n", no - 6);

	return 0;
}
