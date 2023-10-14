// 문제 1-10
// "천", "지", "인"이라고 출력하는 프로그램을 작성하자. 출력에는 printf 함수가 아닌 puts 함수를 이용한다.

#include <stdio.h>

int main(void) {
	puts("천\n지\n인");
	return 0;
}

/* puts 함수: 표시를 수행하는 함수
   (끝에 있는 s는 string을 뜻하며, 일반적으로 puts는 '풋 에스' 등으로 읽는다.)
   puts 함수는 인수로 주어진 문자열을 출력하고, 줄 바꿈 문자를 추가로 출력한다.
   즉 puts("...");는 printf("...\n")와 거의 같은 동작을 나타낸다. */

/* printf("ABCDE\n"); -> *형식 설정이나 숫자 출력 등도 가능
                         *줄 바꿈 문자 출력은 명시적으로 지정해야 함

   puts("ABCDE");     -> *형식 설정이나 숫자 출력 등은 불가능
                         *줄 바꿈 문자가 자동으로 출력됨 */
