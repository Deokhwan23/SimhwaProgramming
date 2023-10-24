// 문제 4-26
// [문제 4-25]의 프로그램을 다음과 같이 수정하자.
// - '*'가 아니라 '+'와 '-'를 교대로 출력   - 홀수 행 앞은 '+'로, 짝수 행 앞은 '-'로 시작

#include <stdio.h>

int main(void) {
	int no, width;

	printf("몇 개를 출력할까요? "); scanf("%d", &no);
	printf("몇 개마다 줄 바꿈할까요? "); scanf("%d", &width);

	if (no>0) {
		int i, j;
		int rem = no % width;
		int wid = width / 2;
		int odd = width % 2;
		for (i=0; i<no/width/2; i++) {
			for (j=0; j<wid; j++) printf("+-");
			putchar('\n');
			for (j=0; j<wid; j++) printf("-+");
			putchar('\n');
		}
		if (rem>0) {
			switch (no/width%2) {
			case 0: for (j=0; j<rem/2; j++) printf("+-");
			if (rem%2) putchar('+');
			break;
			case 1: for (j=0; j<rem/2; j++) printf("-+");
			if (rem%2) putchar('-');
			break;
			}
			putchar('\n');
		}
	}

	return 0;
}

/* 참고: 다음과 같이 구현하면 짧고 간결하지만, 반복할 때마다 나눗셈을 2번씩 수행하게 된다.
int i;
int line = 1;
int column = 1;
for (i=0; i<no; i++) {
	putchar((line + column++)% 2 ? '+' : '-');
	if (i % width == width - 1) {
		line++;
		column = 1;
		putchar('\n');
	}
}
if (i%width != 0)
	putchar('\n'); */
