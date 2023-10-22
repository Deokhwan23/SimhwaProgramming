// 문제 3-13
/* 키보드로 입력한 점수에 따라 우수/양호/가능/불가를 판정하여 출력하는 프로그램을 작성하자.
   판정은 다음과 같다. 0~59->불가/60~69->가능/70~79->양호/80~100->우수 */

#include <stdio.h>

int main(void) {
	int point;

	printf("정수 : ");
	scanf("%d", &point);

	if (point<0 || point>100)
		puts("올바르지 않은 정수입니다.");
	else if (point<=59)
		puts("불가");
	else if (point<=69)
		puts("가능");
	else if (point<=79)
		puts("양호");
	else
		puts("우수");

	return 0;
}
