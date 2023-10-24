// 문제 4-25
// 정숫값 no와 width를 읽어 들여 no개의 '*'를 출력하는 프로그램을 작성하자. width개 출력마다 줄 바꿈한다.

#include <stdio.h>

int main(void) {
	int no, width;

	printf("몇 개의 *를 출력할까요? "); scanf("%d", &no);
	printf("몇 개마다 줄 바꿈할까요? "); scanf("%d", &width);

	if (no > 0){
		int i, j;
		int rem = no % width;
		for (i=0; i<no/width; i++){
			for (j=0; j<width; j++)
				putchar('*');
			putchar('\n');
		}
		if (rem > 0) {
			for (i=0; i<rem; i++)
				putchar('*');
			putchar('\n');
		}
	}

	return 0;
}

// *표 나열
// [문제 4-19]를 응용한 문제다.
// 줄 바꿈 시점이 '5개씩'에서 'width개마다'로 바뀌었다.
/* 안쪽 for문의 제어식 중 no / width는 *를 가로로 width개 나열해 출력하는 행 수를 구하기 위한 연산이다.
   (예를 들어 실행 예에서는 6행에 걸쳐 *를 가로로 5개 출력하므로 이 값은 6이다).
   식 no / width는 for문 반복이 수행될 때마다 평가되며, 똑같은 연산이 몇 번이나 수행된다.
   (실행 예에서는 33 / 5 나눗셈이 6번 반복 수행된다).
   나눗셈을 한 번으로 끝내려면 다음의 '다른 해답'처럼 구현된다. */
/* 다른 해답(일부)
int rem = no % width;
int height = no / width;
for (i=0; i<width; i++) {
	for (j=0; j<height; j++)
		putchar('*');
	putchar('\n');
} */
