// 문제 3-16
// 월을 정숫값으로 읽어 들인 다음, 그 계절을 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int month;

	printf("몇 월인가요? ");
	scanf("%d", &month);
	printf("%d월은 ", month);
	switch (month) {
	case 3 :
	case 4 :
	case 5 : puts("봄입니다."); break;
	case 6 :
	case 7 :
	case 8 : puts("여름입니다."); break;
	case 9 :
	case 10 :
	case 11 : puts("가을입니다."); break;
	case 12 :
	case 1 :
	case 2 : puts("겨울입니다."); break;
	default : puts("없는 월입니다!!\a"); break;
	}

	return 0;
}

/* default 레이블
   제어식을 평가한 값이 어느 case와도 일치하지 않으면 프로그램의 흐름은 default 레이블로 이동한다.
   break문이 없는 곳에서는 프로그램의 흐름이 다음 구문으로 '떨어지게' 된다.
   그러므로 month의 값이 3, 4, 5 어느 값이든 "봄입니다."라고 출력한다.(다른 계절도 마찬가지다). */

/* switch문 안의 레이블 출현 순서를 바꾸면 실행 결과도 달라진다.
   switch문을 사용할 때는 레이블의 순서 등이 타당한지 꼭 확인해야 한다. */
