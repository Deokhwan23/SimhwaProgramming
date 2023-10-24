// 문제 4-27_3
// 읽어 들인 정수를 짧은 변의 길이로 하는 직각이등변삼각형을 출력하는 프로그램을 작성하자.
// 왼쪽 아래가 직각인 삼각형, 왼쪽 위가 직각인 삼각형, 오른쪽 아래가 직각인 삼각형, 오른쪽 위가 직각인 삼각형을 각각 만든다.

#include <stdio.h>

int main(void) {
	int i, j, len;

	puts("오른쪽 아래가 직각인 직각이등변삼각형을 만듭니다.");
	printf("짧은 변: ");
	scanf("%d", &len);

	for (i=1; i<=len; i++) {
		for (j=1; j<=len-i; j++)
			putchar(' ');
		for (j=1; j<=i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
