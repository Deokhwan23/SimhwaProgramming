// 문제 2-6
// 읽어 들인 실숫값을 그대로 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	double x;

	puts("실숫값을 입력하세요 : ");
	scanf("%lf", &x);

	printf("당신은 %f이라 입력했군요.\n", x);

	return 0;
}

/* int로 선언한 변수에는 정숫값만 대입할 수 있다.
   이는 int라는 자료형(type)의 성질이다.
   C언어에서는 실수를 부동소수점수(floating-point number)라는 형식으로 나타낸다.
   이 자료형에는 몇 가지 종류가 있고, 이 프로그램에서 double형을 사용했다.*/
// 각각의 자료형에는 고유의 성질이 있는데, 그 성질을 그대로 이어받아 만든 변수를 객체(object)라고 한다.

/* double형 변수로 값을 읽어 들일 때 scanf 함수에 부여할 형식 지정자는 %lf다.
   또한 printf함수로 double형 값을 출력하기 위한 형식 지정자는 %f다. */
