// 문제 4-13
// 양의 정숫값을 읽어 들여 그 자릿수를 출력하는 프로그램을 작성하자.

#include <stdio.h>

int main(void) {
	int no, temp;
	int digits;

	do{
		printf("양의 정수를 입력하세요: ");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a양의 정수만 입력해주세요.");
	} while (no <= 0);

	temp = no;
	digits = 0;

	while (temp > 0) {
		temp /= 10;
		digits++;
	}
	printf("%d은(는) %d자리입니다.\n", no, digits);

	return 0;
}

// [문제 4-12]와 마찬가지로 다음과 같이 구현하면 변수 temp가 필요 없다.(단, 변수 no의 값이 바뀐다.)
/* printf("%d는 ", no);
   while (no > 0) {
  	 no /= 10;
  	 digits++;
   }
   printf("%d자리입니다.", digits); */
