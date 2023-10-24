// 문제 4-8
// 정숫값을 읽어 들인 후 1부터 시작해 그 수까지 카운트업하는 프로그램을 작성하자.
// 각 수샂를 쉽표로 구분하고, 전체를 {}로 감쌌다.

#include <stdio.h>

int main(void) {
	int no;

	printf("양의 정수를 입력하세요: ");
	scanf("%d", &no);

	if (no >= 1) {
		int i = 1;
		printf("{");
		while (i < no)
			printf("%d, ", i++);
		printf("%d}\n", no);
	}

	return 0;
}

// 이 프로그램은 다음과 같이 구현할 수도 있다.
/* int i = 1;
printf("{");
whlie (i <= no) {
	printf("%d", i);
	if (i == no)
		printf("}\n");
	else
		printf(", ");
	i++;
} */

// while문의 반복은 no번이다.
// 루프 본체에서는 숫자를 출력한 다음 if문의 판정에 따라 i가 no일 때만 '}\n'을 출력하고 그렇지 않을 때는 ','를 출력한다.
// 한 번만 성립하는 i == no의 판정을 반복할 때마다(no번) 수행하는 것은 비효율적이라는 점에 주의하자.
// 예를 들어 no가 500이라면 1번밖에 성립하지 않는다는 것(마지막 1번만 성립)을 미리 알고 있음에도 500번이나 수행한다.

// 키워드
// C 언어에는 if나 else와 같은 단어에는 특별한 의미가 있다.
// 이러한 단어를 키워드(keyword)라고 하며, 이들은 변수명 등으로 사용할 수 없다.
/* C 언어의 키워드
    auto    break   case     char     const      continue
   default   do     double   else     enum       extern
    float   for     goto      if      int        long
  register  return  short    signed   sizeof     static
   struct   switch  typedef  union    unsigned   void
  volatile  while */
