// 문제 4-11
// 정숫값을 읽어 들여 그 값의 개수만큼 +와 -를 교대로 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int no;

	printf("양의 정수: ");
	scanf("%d", &no);

	if (no >= 1) {
		int i = 1;
		while (i <= no){
			if (i % 2)
				putchar('+');
			else
				putchar('-');
			i++;
		}
		putchar('\n');
	}

	return 0;
}
