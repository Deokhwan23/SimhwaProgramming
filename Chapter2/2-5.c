// 문제 2-5
// 읽어 들인 정숫값 2개의 평균값 부호를 반전한 값이 출력되는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int x, y;
	int ave;

	puts("2개의 정숫값을 입력하세요.");
	printf("정수 x : "); scanf("%d", &x);
	printf("정수 y : "); scanf("%d", &y);

	ave = (x+y)/2;

	printf("평균값의 부호를 반전한 값은 %d입니다.\n", -ave);

	return 0;
}

// 2항 연산자(binary operator): 2개의 피연산자가 필요한 연산자
// 단항 연산자(unary operator): 피연산자가 한 개만 필요한 연산자
// 3항 연산자(ternary operator): 3개의 피연산자가 필요한 연산자

/* 단항 + 연산자와 단항 - 연산자
   단항 + 연산자(unary + operator)   +a   a의 값
   단항 - 연산자(unary - operator)   -a   a의 부호를 반전한 값 */

/* 단순 대입 연산자(simple assignment operator)  a=b  b를 a에 대입
   (보통 간단히 대입 연산자라고 함) */

/* 식(expression): 변수나 상수에 연산자를 결합한 것
   ex) vx + 32 -> vx, 32, vx+32 모두가 식
       vc = vx + 32 -> vc, vx, 32, vx+32, vc = vx+32 모두를 식으로 간주
       vc가 대입 연산자 =의 제1피연산자, vx+32가 제2피연산자이다. */
// 대입식(assignment expression): 대입 연산자를 이용한 식
// 식 구문(expression statement): 식에 세미콜론이 붙은 구문
