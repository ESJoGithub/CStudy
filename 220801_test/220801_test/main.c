#include <stdio.h>
#include "methods.h"

int main() {

	sp1();

	int num1, num2, num3, num4, num5;
	printf("숫자를 다섯 개 입력해주세요: ");
	scanf_s("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	sp2_1(num1, num2, num3, num4, num5);
	sp2_2(num1, num2, num3, num4, num5);

	sp3();

	return 0;
}