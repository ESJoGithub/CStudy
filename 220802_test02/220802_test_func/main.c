#include <stdio.h>
#include "methods.h"

int main() {

	// 1. �� ���� ���� �Ҽ� ���
	prime_num();
	printf("\n");
	// 2. �Ҽ�/�Ͻ�Ʈ�� ���� �Ǻ�
	distinc_num();
	printf("\n");

	// 3. ���ڸ� ������ �� ���� �Ҽ� ���� ���
	dissol_num();
	printf("\n");

	//4.-5.
	printf("[Get Sum / Get Factorial]\n");
	int num, total, facto;
	num = getnum();

	// 4. ���� �� ���ϱ�
	total = sum(num);
	//int total2 = sum2(num);
	printf("total = %d\n", total);
	//printf("total = %d\n", total2);

	// 5. ���(���丮��) ���ϱ�
	facto = factorial(num);
	//int facto2 = factorial2(num);
	printf("%d! = %d\n", num, facto);
	//printf("%d! = %d\n", num, facto2);
	printf("\n");

	// 6. �ִ����� ���ϱ�
	int a, b;
	printf("[Get Greatest Common Divisor]\n");
	printf("Enter tow positive numbers: ");
	scanf_s("%d %d", &a, &b);

	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	int GCD = g_common(a, b);
	//int GCD2 = g_common2(a, b);
	printf("The greatest common divisor of %d, %d is %d\n", a, b, GCD);
	//printf("The greatest common divisor of %d, %d is %d\n", a, b, GCD2);
	printf("\n");

	// 7. 2���� -> 10����
	btod();
	printf("\n");
	// 8. 10���� -> 2����
	dtob();
	printf("\n");

	return 0;
}