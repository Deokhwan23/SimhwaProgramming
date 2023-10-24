// 문제 4-21
/* 양의 정숫값을 읽어 들여 그 값이 넓이, 가로세로 길이가 정숫값,
   세로 길이가 가로 길이 이하인 직사각형의 변의 길이를 '세로x가로' 형식으로 나열하는 프로그램을 작성하자. */

#include <stdio.h>

int main(void) {
	int area;
	int height;

	printf("넓이: ");
	scanf("%d", &area);

	for (height = 1; height < area; height++){
		if (height * height > area) break;
		if (area % height != 0) continue;
		printf("%d x %d\n", height, area / height);
	}

	return 0;
}

/* break문과 continue문
   이 프로그램에서는 변수 height값을 1, 2, 3, ...으로 인크리먼트해간다.

   break문
   height의 제곱이 area를 넘으면 break문이 실행된다.
   반복을 수행하는 구문 안에서 break문을 실행하면 프로그램의 흐름이 반복문을 빠져나간다(강제 종료).
   (실행 예의 경우 height가 6이면 그 제곱 6*6이 직사각형의 넓이 32를 넘으므로 while문을 강제 종료한다.
    이는 그 이상 height를 인크리먼트하면 세로 길이가 가로 길이를 넘기 때문이다.)

   continue문
   넓이 area를 height로 나눈 나머지가 0이 아닐 때 실행하는 구문은 continue문이다.
   continue문을 실행하면 루프 본체의 남은 부분(이 프로그램에서는 printf 함수 호출)을 건너뛴다.
   (area를 height로 나눈 나머지가 0이 아닐 때 건너뛰는 것은 세로 길이가 height이고 넓이가 area인
    직사각형의 가로 길이가 정수가 아니기 때문이다.)

   [문제 4-22]에서 배울 '다중 루프'안에서 break문이나 continue문을 실행할 때 반복을 빠져나가거나
   루프 본체의 남은 부분을 건너뛸 대상은 바깥쪽 반복문이 아닌 안쪽 반복문이다. */
