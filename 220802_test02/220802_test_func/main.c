#include <stdio.h>
#include "methods.h"

int main() {

	// 1. 두 숫자 사이 소수 출력
	prime_num();
	printf("\n");
	// 2. 소수/암스트롱 숫자 판별
	distinc_num();
	printf("\n");

	// 3. 숫자를 만들어내는 두 개의 소수 조합 출력
	dissol_num();
	printf("\n");

	//4.-5.
	printf("[Get Sum / Get Factorial]\n");
	int num, total, facto;
	num = getnum();

	// 4. 숫자 합 구하기
	total = sum(num);
	//int total2 = sum2(num);
	printf("total = %d\n", total);
	//printf("total = %d\n", total2);

	// 5. 계승(팩토리얼) 구하기
	facto = factorial(num);
	//int facto2 = factorial2(num);
	printf("%d! = %d\n", num, facto);
	//printf("%d! = %d\n", num, facto2);
	printf("\n");

	// 6. 최대공약수 구하기
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

	// 7. 2진수 -> 10진수
	btod();
	printf("\n");
	// 8. 10진수 -> 2진수
	dtob();
	printf("\n");

	return 0;
}