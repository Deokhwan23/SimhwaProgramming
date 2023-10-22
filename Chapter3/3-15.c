// 문제 3-15
// 정숫값을 읽어 들여 홀수인지 짝수인지 판단한 후 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int no;

	printf("정수를 입력하세요 : ");
	scanf("%d", &no);

	switch (no % 2) {
	case 0 : puts("이 값은 짝수입니다.\n"); break;
	case 1 : puts("이 값은 홀수입니다.\n"); break;
	}

	return 0;
}

/* switch문(switch statement)
   제어식(여기서는 no%2)를 평가한 값이 1이라면, 프로그램의 흐름이 'case 1 : '이라고 적힌 부분으로 이동한다.
   case 1 : 과 같이 레이블(label)은 프로그램이 이동한 곳을 가리킨다.
   레이블의 값은 '상수'여야 하며 변수는 허용되지 않는다. 또한 여러 개의 레이블이 같은 값을 가져서도 안 된다.
   1과 : 사이에는 공백을 넣어도 되고 넣지 않아도 된다.
   단, case와 1 사이에는 공백이 필요하다. 공백을 넣지 않고 case1이라 할 수는 없다. */

/* break문(break statement)
   프로프램의 흐름이 break문(break statement)를 만나면 break문을 실행한다.
   그 결과 프로그램의 흐름은 이를 감싼 switch문을 빠져나간다. */

/* 선택문(selection statement): 이 장에서 배운 if문과 switch문은 모두 프로그램의 흐름을 선택적으로
                              분기하므로, 이들을 모두 선택문이라고 한다. */
