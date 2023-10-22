// 문제 3-2
/* 정숫값 2개를 읽어 들인 다음, 후자가 전자의 약수라면 "B는 A의 약수입니다."를 출력하고
   그렇지 않으면 "B는 A의 약수가 아닙니다." 라고 출력하는 프로그램을 작성하자. */

#include <stdio.h>

int main(void) {
	int a, b;

	puts("2개의 정수를 입력하세요.");
	printf("정수 A : "); scanf("%d", &a);
	printf("정수 B : "); scanf("%d", &b);

	if (a % b)
		puts("B는 A의 약수가 아닙니다.");
	else
		puts("B는 A의 약수입니다.");

	return 0;
}

// if문 - 만약 ~이라면... 그렇지 않다면...
/* if (식)
     구문;
   else
     구문; */
