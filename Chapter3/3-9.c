// 문제 3-9
// 정숫값 2개를 읽어 들인 다음, 그 차이를 구해서 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int n1, n2, diff;

	puts("2개의 정수를 입력하세요.");
	printf("정수 1 : "); scanf("%d", &n1);
	printf("정수 2 : "); scanf("%d", &n2);

	if (n1 > n2)
		diff = n1 - n2;
	else
		diff = n2 - n1;

	printf("두 값의 차이는 %d입니다.\n", diff);

	return 0;
}

/* 조건 연산자(conditional operator): 3개의 피연산자가 필요한 3항 연산자
   (3항 연산자는 조건 연산자 ? :뿐이며, 다른 연산자는 단항 연산자 또는 2항 연산자다.)
   ex) sa = (n1 > n2) ? n1 - n2 : n2 - n1;
   조건 연산자   a ? b : c   a가 0이 아니라면 b를 평가한 값, 그렇지 않다면 c를 평가한 값
   a) n1이 57이고 n2가 32일 때
      n1 > n2 ? n1 - n2 : n2 - n1 -> n1 - n2 이 식의 평갓값 채용
   b) n1이 32이고 n2가 57일 때
      n1 > n2 ? n1 - n2 : n2 - n1 -> n2 - n1 이 식의 평갓값 패용 */
