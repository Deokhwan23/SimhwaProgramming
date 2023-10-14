// 문제 2-11
/* 사다리꼴의 면적을 구하는 프로그램을 작성하자.
   이때 윗변, 밑변, 높이를 정수값으로 읽어 들여 넓이를 실숫값으로 출력한다. */

#include <stdio.h>

int main(void) {
	int a, b, h;

	puts("사다리꼴의 넓이를 구합니다.");
	printf("윗변 : "); scanf("%d", &a);
	printf("밑변 : "); scanf("%d", &b);
	printf("높이 : "); scanf("%d", &h);

	printf("넓이는 %f입니다.\n", (a+b)*h/2.0);

	return 0;
}

/* [문제 2-11]의 식
   (a+b)*h/2.0         (O)

   (a+b)*h/2           (X) 연산에서 소수부가 버려짐

   (double)(a+b)*h/2   (O)
   (double)((a+b)*h)/2 (O)
   (((double)a+b)*h)/2 (O)
   ((a+(double)b)*h)/2 (O)
   ((a+b)*(double)h)/2 (O) */
