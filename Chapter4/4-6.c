// 문제 4-6
// 양의 정숫값을 읽어 들여 그 수 이하의 양의 짝수를 순서대로 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int no;

	printf("양의 정수를 입력하세요: ");
	scanf("%d", &no);

	if (no >= 1) {
		int i = 2;
		while (i <= no) {
			printf("%d ", i);
			i += 2;
		}
		printf("\n");
	}

	return 0;
}

// while문의 루프 본체에서는 복합 대입 연산자 +=를 이용해 반복할 때마다 i값을 2씩 증가시킨다.
// 홀수를 출력한다면 다음과 같이 작성한다.
/* if (no >= 1) {
	int i = 1;
	while (i <= no) {
		printf("%d ", i);
		i += 2;
	}
	printf("\n");
} */

/* do문 표기
} while: 행 앞부분에 }가 있음 => do문의 일부
while: 행 앞부분에 }가 없음 => while문의 일부
do문의 루프 본체는 가령 단일문이라고 해도 {}로 감싸서 복합문(블록)으로 만들면 프로그램이 읽기 쉬워진다. */
