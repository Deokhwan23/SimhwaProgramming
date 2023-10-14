// 문제 1-2
// 15에서 37을 뺀 값을 계산한 후 '15에서 37을 뺀 값은 -22입니다.'라고 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	printf("15에서 37을 뺀 값은 %d입니다.\n", 15-37);
	return 0;
}

// /* ... */ -> 주석(comment)
// \n -> 제어 문자(escape sequence)

// 형식 문자열(format string): printf 함수에 지정하는 첫 번째 인수
// 형식 지정자(conversion specification): 형식 문자열 안의 %d와 같이 형식을 지시하는 것
// ex) printf("15에서 37을 뺀 값은 %d입니다.\n", 15-37); 에서
// "15에서 37을 뺀 값은 입니다." -> 형식 문자열, %d -> 형식 지정자, \n -> 줄 바꿈 문자
