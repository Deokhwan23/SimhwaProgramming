// 4-11 프로그램 B

#include <stdio.h>

int main(void) {
	int i, no;

	printf("양의 정수: ");
	scanf("%d", &no);

	if (no >= 1){
		int i = 1;
		while (i <= no / 2){
			printf("+-");
			i++;
		}
		if (no % 2 == 1)
			putchar('+');
		putchar('\n');
	}

	return 0;
}

/* 1. no/2개의 "+-" 출력
    이 while문은 "+-" 출력을 no/2번 반복한다.
    출력 횟수는 예를 들어 no가 14면 7번, no가 13이면 6번이다.
	그러므로 no가 짝수면 이 단계만으로 출력이 완료된다. */
/* 2. no가 홀수일 때만 '+' 출력
    이 if문은 no가 홀수일 때만 '+'를 출력한다.
    이렇게 하면 no가 홀수일 때의 출력이 완료된다. */
/* 이 프로그램은 반복할 때마다 if문 판정을 수행할 필요가 없다.
   또한 반복 제어를 0부터가 아닌 1부터로 변경할 때도 유연하게 대응할 수 있다. */
