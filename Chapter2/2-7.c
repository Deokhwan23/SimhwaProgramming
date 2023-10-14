// 문제 2-7
// 실숫값을 읽어 들여 그 값을 반지름으로 하는 원의 넓이를 구해서 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	double r;

	printf("반지름은 : ");
	scanf("%lf", &r);

	printf("원의 넓이는 %f입니다.\n", 3.14*r*r);

	return 0;
}

// 정수 상수(integer constant): 5나 37 등의 상수 -> 기본적으로 int형
// 부동소수점 상수(floating constant): 3.14와 같은 소수부를 가진 상수 -> 기본적으로 double형

/* 형식 지정자 사용 구분
                           10진수 int형             double형
   printf 함수를 이용한 출력   printf("%d", no);   printf("%f", no);
   scanf 함수를 이용한 읽기    scanf("%d", &no);   scanf("%lf", &no);
 */
