// 문제 2-8
/* 정수 상수, 부동소수점 상수, int형 변수, double형 변수를 곱하거나 나누는 등 다양한 연산을 수행하는
   프로그램을 작성해서 자료형과 연산에 관한 규칙을 확인하자. */

#include <stdio.h>

int main(void) {
	int n1, n2;
	double d1, d2;

	puts("정수와 실수를 2개씩 입력하세요.");
	printf("정수 n1 : "); scanf("%d", &n1);
	printf("정수 n2 : "); scanf("%d", &n2);
	printf("정수 d1 : "); scanf("%lf", &d1);
	printf("정수 d2 : "); scanf("%lf", &d2);

	printf("5*2=%d\n", 5*2);
	printf("5/2=%d\n", 5/2);
	printf("5*n1=%d\n", 5*n1);
	printf("5/n1=%d\n", 5/n1);
	printf("n1*n2=%d\n", n1*n2);
	printf("n1/n2=%d\n", n1/n2);

	printf("5*2.5=%f\n", 5*2.5);
	printf("5/2.5=%f\n", 5/2.5);
	printf("5*d1=%f\n", 5*d1);
	printf("5/d1=%f\n", 5/d1);
	printf("n1*d2=%f\n", n1*d2);
	printf("n1/d2=%f\n", n1/d2);

	printf("5.3*2.5=%f\n", 5.3*2.5);
	printf("5.3/2.5=%f\n", 5.3/2.5);
	printf("5.3*d1=%f\n", 5.3*d1);
	printf("5.3/d1=%f\n", 5.3/d1);
	printf("d1*d2=%f\n", d1*d2);
	printf("d1/d2=%f\n", d1/d2);

	return 0;
}

/* 한쪽이 int형이고 다른 한쪽이 double형이라면, int형 피연산자의 값이 double형으로 변환되는
   암묵적 형 변환이 수행되므로 double형끼리의 연산이 된다.
   그러므로 연산을 통해 얻은 결과도 double형이다. */
