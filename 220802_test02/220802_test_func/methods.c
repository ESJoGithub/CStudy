#include <stdio.h>
#include "methods.h"

int getnum()
{
	int num;
	printf("Enter a positive Number: ");
	scanf_s("%d", &num, sizeof(num));
	return num;
}

int getprimenum(int num) {
	int count = 0;
	if (num == 1) {
		return count;
	}
	else {
		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				count++;
			}
		}
		return !count;
	}
}

void prime_num() 
{
	int a, b;
	printf("[Prime Nmber]\n");
	printf("Enter two Numbers(2): ");
	scanf_s("%d %d", &a, &b);

	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	for (int i = a; i <= b; i++) {
		int p_num = getprimenum(i);
		if (p_num) {
			printf("%d\t", i);
		}
	}
	printf("\n");
}

void distinc_num() {

	printf("[Prime Nmber / Amstrong Number]\n");
	int num = getnum();
	int t_num = num;
	int sum = 0;

	int p_num = getprimenum(num);
	if (p_num) 
		printf("%d is a Prime number.\n", num);
	else 
		printf("%d is not a Prime number.\n", num);

	while (t_num > 0) {
		int temp = t_num % 10;
		sum += temp * temp * temp;
		t_num /= 10;
	}
	if (sum == num)
		printf("%d is an Armstrong number.\n", num);
	else
		printf("%d is not an Armstrong number.\n", num);
}

void dissol_num() {
	printf("[Prime Nmber + Prime Number]\n");
	int num = getnum();

	for (int i = 1; i < num; i++) {
		int p_num = getprimenum(i);
		if (p_num) {
			int p_num2 = getprimenum(num - i);
			if (p_num2) {
				printf("%d = %d + %d\n", num, i, num-i);
			}
		}
	}
}

int sum(int num) {
	if (num != 0) {
		return num + sum(num - 1);
	}
	else {
		return 0;
	}
}

int sum2(int num) {
	int sum = 0;
	for(int i = num; i > 0; i--) {
		sum += i;
	}
	return sum;
}

int factorial(int num) {
	if (num != 1) {
		return num * factorial(num-1);
	}
	else {
		return 1;
	}
}

int factorial2(int num) {
	int total = 1;
	for (int i = num; i > 1; i--) {
		total *= i;
	}
	return total;
}

int g_common(int a, int b) {
	if (b % a != 0) {
		return g_common(b%a, a);
	}
	else {
		return a;
	}
}

int g_common2(int a, int b) {
	for (int i = a; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}
}

void btod() {

	int bi_num;

	printf("[Binary Nmber -> Decimal Number]\n");
	printf("Enter a binary Number: ");
	scanf_s("%d", &bi_num, sizeof(bi_num));

	int binary = 1;
	int result = 0;
	while (bi_num > 0) {
		result += (bi_num % 10) * binary;
		bi_num /= 10;
		binary *= 2;
	}
	printf("%d(BIN) is %d(DEC)\n", bi_num, result);
}

void dtob() {

	printf("[Decimal Number -> Binary Nmber]\n");
	int dec_num = getnum();

	int decent = 1;
	int result = 0;
	while (dec_num > 0) {
		result += (dec_num % 2) * decent;
		dec_num /= 2;
		decent *= 10;
	}
	printf("%d(DEC) is %d(BIN)\n", dec_num, result);
}