// 문제 2-10
// 정숫값 2개를 읽어 들여 앞의 값이 뒤의 값의 몇 %인가를 실수로 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int a, b;

	puts("2개의 정수를 입력하세요.");
	printf("정수 a : "); scanf("%d", &a);
	printf("정수 b : "); scanf("%d", &b);

	printf("a 값은 b의 %f%%입니다.\n", (double)a/b*100.0);

	return 0;
}

// 캐스트(cast): 명시적인 형 변환
// ()의 이름은 캐스트 연산자(cast operator)
// 캐스트 연산자   (자료형)a   a의 값을 지정된 자료형의 값으로 변환해 생성

/* [문제 2-10]의 식
   (double)a/b*100         (O)
   a/(double)b*100         (O)
   (double)a/(double)b*100 (O)
   100.0*a/b               (O)

   a/b*100                 (X) a/b단계에서 소수부가 버려짐
   a/b*100.0               (X) a/b단계에서 소수부가 버려짐

   (double)(a/b)*100       (X) a/b단계에서 소수부가 버려짐
                               잘린 값을 double로 캐스트해도 이미 늦었으므로 의미 없음 */
