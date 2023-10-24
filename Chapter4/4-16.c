// 문제 4-16
// 키와 표준 몸무게를 연결한 표를 출력하는 프로그램을 작성하자.
// 출력하는 키의 범위(시작 값, 종료 값, 증분)는 정숫값으로 읽어 들이고 표준 몸무게는 소수점 2자리까지 출력한다.

#include <stdio.h>

int main(void) {
	int height;
	int lower, upper, step;

	printf("몇 cm부터 : "); scanf("%d", &lower);
	printf("몇 cm까지 : "); scanf("%d", &upper);
	printf("몇 cm마다 : "); scanf("%d", &step);

	for (height = lower; height <= upper; height += step)
		printf("%dcm %.2fkg\n", height, (height-100)*0.9);

	return 0;
}

/* for문과 while문
   for문은 while문과 마찬가지로 먼저 판정한 다음 반복을 수행하는 구문이다.
   for문은 while문으로 바꿀 수 있고, whil문은 for문으로 바꿀 수 있다.

   while문을 이용하여 이 프로그램의 for문을 구현하면 다음과 같다.
height = lower;
while (height <= upper) {
	printf("%dcm %.2fkg\n", height, (height-100)*0.9);
	height += step;
} */
