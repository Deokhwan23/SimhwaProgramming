// 문제 3-11
/* 정숫값 3개를 읽어 들여 이들 값이 모두 같으면 "3개 값이 모두 같습니다.",
   두 값이 같으면 "2개 값이 같습니다.",
   모두 다르면 "3개 값은 모두 다릅니다." 라고 출력하는 프로그램을 작성하자. */

#include <stdio.h>

int main(void) {
	int a, b, c;

	puts("3개의 정수를 입력하세요.");
	printf("정수 A : "); scanf("%d", &a);
	printf("정수 B : "); scanf("%d", &b);
	printf("정수 C : "); scanf("%d", &c);

	if (a == b && b == c)
		puts("3개 값이 모두 같습니다.");
	else if (a == b || b == c || c == a)
		puts("2개 값이 같습니다.");
	else
		puts("3개 값은 모두 다릅니다.");

	return 0;
}

/* [문제 3-9]에서는 조건 연산자를 이용했을 때 프로그램이 간결해졌지만 [문제 3-10]에서는 오히려 복잡해졌다.
   그러므로 [문제 3-7]과 같이 if문을 나열하는 편이 프로그램 의도를 더 직관적으로 나타낼 수 있다. */

/* 논리 AND 연산자(logical AND operator): &&
   a && b를 평가했을 때는 a와 b 양쪽 모두 0이 아니면 1, 그렇지 않으면 0이라는 값을 얻을 수 있다.
   == 'a 그리고 b'라고 생각하면 된다.

   *논리곱    양쪽 모두 0이 아니면 1
     a        b      a && b
   0이 아님   0이 아님      1
   0이 아님     0         0
     0      0이 아님      0
     0        0         0 */

/* 논리 OR 연산자(logical OR operator): ||
   a || b를 평가했을 때 a와 b 중 한쪽이 0이 아니면 1, 그렇지 않으면 0을 얻을 수 있다.
   == 'a 또는 b'라고 생각하면 된다.

   *논리합   한쪽이라도 0이 아니면 1
     a        b      a || b
   0이 아님   0이 아님      1
   0이 아님     0         1
     0      0이 아님      1
	 0        0         0 */

// 논리 연산자
   논리 AND 연산자   a && b   a와 b의 값 중 둘 다 0이 아니면 1, 그렇지 않으면 0(자료형은 int형)
   논리 OR 연산자    a || b   a와 b의 값 중 한쪽이라도 0이 아니면 1, 그렇지 않으면 0(자료형은 int형) */

/* &&연산자는 a를 평가한 값이 0이면 b는 평가하지 않는다.
   또한 || 연산자는 a를 평가한 값이 0이 아니면 b는 평가하지 않는다.
   이것을 단락 평가라고 한다. */
