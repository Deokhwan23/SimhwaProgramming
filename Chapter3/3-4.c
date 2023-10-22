// 문제 3-4
// 정숫값을 읽어 들여 그 절댓값을 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int num;

	printf("정수를 입력하세요 : ");
	scanf("%d", &num);

	if (num < 0)
		num = -num;

	printf("절댓값은 %d입니다.\n", num);

	return 0;
}

/* 다른 해답: if_else_이용
  if (num < 0)
	  printf("절댓값은 %d입니다.\n", -num);
  else
	  printf("절댓값은 %d입니다.\n", num); */
