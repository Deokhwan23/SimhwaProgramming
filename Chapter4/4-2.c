// 문제 4-2
// 정숫값 2개를 읽어 들여 작은 쪽 수 이상, 큰 쪽 수 이하인 모든 정수를 더한 값을 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int a, b;
	int no, lower, upper;
	int sum = 0;

	printf("정수 A : "); scanf("%d", &a);
	printf("정수 B : "); scanf("%d", &b);

	if (a>b) {
		lower = b;
		upper = a;
	} else {
		lower = a;
		upper = b;
	}

	no = lower;
	do {
		sum = sum + no; // sum += no;
		no = no + 1; // no++;
	} while (no <= upper);

	printf("%d 이상 %d 이하의 모든 정수를 더한 값은 %d입니다.\n", lower, upper, sum);

	return 0;
}

/* 복합 대입 연산자(compound assignment operator): 두 가지 연산자를 한 번에 수행하는 '1인 2역' 연산자
   장점1: 입력 수가 줄어듦(변수명 sum 입력은 한 번으로 충분)
   장점2: 수행할 연산을 간결하게 나타냄
   복합 대입 연산자는 모두 10개가 있다.(*, /, %, +, -, <<, >>, &, ^, |)
   복합 대입 연산자   a @= b   a = a@b와 같음(a의 평가는 한 번만 수행함)
                          @=는 다음 중 하나: *= /= %= += -= <<= >>= &= ^= != */
/* 후치 증가 연산자와 후치 감소 연산자
   후치 증가 연산자(postfixed increment operator): 피연산자의 값을 하나만 증가시킨다.
   이처럼 값을 하나만 증가시키는 것을 "인크리먼트한다."라고 말한다.
   후치 감소 연산자(postfixed decrement operator): 피연산자의 값을 하나만 감소시킨다.
   피연산자의 값을 하나만 감소키는 것을 "디크리먼트한다."라고 말한다.
   후치 증가 연산자, 후치 감소 연산자에서 '후치'는 ++나 --등의 연산자를 피연산자 뒤에 두는 데에서 유래했다.
   후치 증가 연산자   a++   a의 값을 하나만 증가시킴(식 전체를 평가하면 증가 전의 값이 됨)
   후치 감소 연산자   a--   a의 값을 하나만 감소시킴(식 전체를 평가하면 감소 전의 값이 됨) */

