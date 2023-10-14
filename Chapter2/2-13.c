// 문제 2-13
/* 키와 몸무게를 실숫값으로 읽어 들여 BMI를 출력하는 프로그램을 작성하자.
   BMI는 몸무게/키*키을 이용하여 구하되(몸무게는 kg, 키는 m)소수점 이하는 2자리로 출력한다. */

#include <stdio.h>

int main(void) {
	double height, weight;

	printf("키를 입력하세요 : "); scanf("%lf", &height);
	printf("몸무게를 입력하세요 : "); scanf("%lf", &weight);

	printf("BMI는 %.2f입니다.\n", weight/((height/100.0)*(height/100.0)));

	return 0;
}

// 문제 [2-13]에서는 키를 cm 단위로 읽어 들여 m 단위로 변환한다.
