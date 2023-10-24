// 문제 4-24
// 가로로 긴 직사각형을 출력하는 프로그램을 작성하자.
// 두 변의 길이를 읽어 들여 작은 쪽을 행 수로 하고 큰 쪽을 열 수로 한다.

#include <stdio.h>

int main(void) {
	int i, j;
	int side1, side2, height, width;

	puts("옆으로 긴 직사각형을 그립니다. ");
	printf("한 변(1) : "); scanf("%d", &side1);
	printf("한 변(2) : "); scanf("%d", &side2);

	if (side1 < side2){
		height = side1;
		width = side2;
	} else {
		height = side2;
		width = side1;
	}

	for (i=1; i<=height; i++){
		for (j=1; j<=width; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}

// [문제 4-23]과 마찬가지로 다중 루프를 사용하여 직사각형을 출력한다.
// 단, 조건에 따라 입력받은 두 값을 비교하여 넓이(열)과 높이(행)를 정해야 한다.
