// 문제 2-12-ex
// 다음은 int형과 double형의 값을 여러 가지 형식으로 출력하기 위한 형식 지정자의 예를 나타낸다.

#include <stdio.h>

int main(void) {
	printf("[%d]\n",     123);
	printf("[%.4d]\n",   123);
	printf("[%4d]\n",    123);
	printf("[%04d]\n",   123);
	printf("[%-4d]\n\n", 123);

	printf("[%d]\n",     12345);
	printf("[%.3d]\n",   12345);
	printf("[%3d]\n",    12345);
	printf("[%03d]\n",   12345);
	printf("[%-3d]\n\n", 12345);

	printf("[%f]\n",      123.13);
	printf("[%.1f]\n",    123.13);
	printf("[%6.1f]\n\n", 123.13);

	printf("[%f]\n",      123.13);
	printf("[%.1f]\n",    123.13);
	printf("[%4.1f]\n\n", 123.13);

	return 0;
}
