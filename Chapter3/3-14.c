// 문제 3-14
/* 정숫값 2개를 읽어 들여 두 값이 같으면 "두 값은 같습니다."라고 출력하고,
   그렇지 않으면 작은 값과 큰 값 모두 출력하는 프로그램을 작성하자. */

#include <stdio.h>

int main(void) {
	int a, b, diff;

	puts("2개의 정수를 입력하세요.");
	printf("정수 A : "); scanf("%d", &a);
	printf("정수 B : "); scanf("%d", &b);

	if (a == b)
		puts("두 값은 같습니다.");
	else {
		int min, max;
		if (a < b) {
			min = a;
			max = b;
		} else {
			min = b;
			max = a;
		}
		printf("작은 값은 %d입니다.\n", min);
		printf("큰 값은 %d입니다.\n", max);
	}

	return 0;
}

/* 복합문(compound statement) 또는 블록(block): else문과 같이 구문 전체가 {}로 싸여 있는 것
                                          (else문 안에 if문과 else문도 복합문이다.)
   다음과 같은 것은 모두 복합문이다. 복합문은 구문상 단일 구문으로 다뤄진다.
   ex) {}                                         {}
       {printf("ABC\n");}                         {구문}
       {int x; x=5;}                              {선언 구문}
       {int x; x=5; printf("%d", x);}             {선언 구문 구문}
       {int x; int y; x=5; y=3; printf("%d", x);} {선언 선언 구문 구문 구문} */
