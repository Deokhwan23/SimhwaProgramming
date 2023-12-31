// 문제 4-22
// 가로와 세로로 1~9의 숫자가 표시된 구구단 표를 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int i, j;

	printf("  |");

	for (i=1; i<=9; i++)
		printf("%3d", i);
	putchar('\n');

	puts("--+---------------------------");

	for (i=1; i<=9; i++){
		printf("%d |", i);
		for (j=1; j<=9; j++)
			printf("%3d", i*j);
		putchar('\n');
	}

	return 0;
}

/* 다중 루프: 반복 안에서 또 반복을 수행하는 루프를 중첩 길이에 따라 2중 루프, 3중 루프, ... 라고 하는데
           이러한 것을 모두 일컬어 다중 루프라고 한다(이 프로그램은 2중 루프다). */

/* 구구단 표의 본체 부분을 출력하는 바깥쪽 for문은 변수 i의 값을 1부터 9까지 인크리먼트한다.
   이 반복은 표의 1행째, 2행째, ..., 9행째에 해당한다. 즉 세로 방향 반복이다.
   각 행에서 실행되는 안쪽 for문은 변수 j의 값을 1부터 9까지 인크리먼트한다. 이것은 각 행의 가로 방향 반복이다.
   따라서 이 2중 루프는 다음과 같은 처리를 수행한다.
   - i가 1일 때: j를 1 -> 9로 인크리먼트하면서 3자리로 1*j로 출력하고 줄 바꿈
   - i가 2일 때: j를 1 -> 9로 인크리먼트하면서 3자리로 2*j로 출력하고 줄 바꿈
   - i가 3일 때: j를 1 -> 9로 인크리먼트하면서 3자리로 3*j로 출력하고 줄 바꿈
   ... 중략 ...
   - i가 9일 때: j를 1 -> 9로 인크리먼트하면서 3자리로 9*j로 출력하고 줄 바꿈
   변수 i의 값을 1부터 9까지 늘려가는 바깥쪽 루프는 9번 반복된다.
   각 반복에서 변수 j의 값을 1부터 9까지 늘려가는 안쪽 루프가 9번 반복된다.
   안쪽을 끝낸 후 줄 바꿈을 출력하고 다음 행으로의 진행을 준비한다.
   이렇게 1x1부터 9x9까지 합계 81개의 수를 출력한다.
   (형식 지정자 %3d를 이용해 i*j의 값 출력을 '(적어도)3자리로' 수행하고 있다는 점에 주의하기 바란다.) */
