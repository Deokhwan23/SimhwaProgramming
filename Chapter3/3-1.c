// 문제 3-1
// 읽어 들인 정숫값이 10의 배수가 아니면 "이 수는 10의 배수가 아닙니다."를 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int no;

	printf("정수를 입력하세요 : ");
	scanf("%d", &no);

	if (no % 10)
		puts("이 수는 10의 배수가 아닙니다.");

	return 0;
}

/* if문 - 만약 ~이라면...
   if (식)
     구문; */
// 제어식(control expression): () 안에 입력하는 식
