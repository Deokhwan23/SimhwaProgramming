// 문제 3-3
// 정숫값을 읽어 들여 그 부호(양수/음수/0)를 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int no;

	printf("정수를 입력해주세요 : ");
	scanf("%d", &no);

	if (no == 0)
		puts("이 수는 0입니다.");
	else if (no > 0)
		puts("이 수는 양수입니다.");
	else if (no < 0)
		puts("이 수는 음수입니다.");

	return 0;
}

/* 등가 연산자(equality operator)
   == 연산자   a == b   a와 b의 값이 같으면 1, 그렇지 않으면 0(자료형은 int형)
   != 연산자   a != b   a와 b의 값이 다르면 1, 그렇지 않으면 0(자료형은 int형) */

/* 관계 연산자(relational operator)
   < 연산자    a < b    a가 b보다 작으면 1, 그렇지 않으면 0(자료형은 int형)
   > 연산자    a > b    a가 b보다 크면 1, 그렇지 않으면 0(자료형은 int형)
   <= 연산자   a <= b   a가 b 이하면 1, 그렇지 않으면 0(자료형은 int형)
   >= 연산자   a >= b   a가 b 이상이면 1, 그렇지 않으면 0(자료형은 int형) */
