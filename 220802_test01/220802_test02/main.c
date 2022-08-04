#include <stdio.h>

int main() {

	// 2. 1~100까지 합 구하기
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("Result : %d\n", sum);

	// 3. 두 숫자 사이 소수 산출
	int a, b;

	printf("Enter two numbers: ");
	scanf_s("%d %d", &a, &b);

	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i = a; i <= b; i++) {
		if (i < 2) {
			continue;
		}
		int count = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				count++;
			}
		}
		if (!count) {
			printf("%d\n", i);
		}
	}
	printf("---\n");

	int getNum();
	int num = getNum();

	// 4. 구구단 출력
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", num, i, num * i);
	}
	printf("---\n");

	// 5. 팩토리얼 계산
	int facto = 1;
	for (int i = num; i > 1; i--) {
		facto *= i;
	}
	printf("%d! = %d\n", num, facto);
	printf("---\n");

	// 6. a^b 출력
	int result = 0;
	int t_a = a, t_b = b;
	int binary = 1;

	while (t_b > 0) {
		if (t_a % 2 != t_b % 2) {
			result += 1 * binary;
		}
		binary *= 2;
		t_a /= 2;
		t_b /= 2;
	}
	printf("%d ^ %d = %d \n", a, b, result);
	printf("---\n");

	// 7. 8자리 이진수 회문구조 판별
	int bi_num;
	printf("Enter a binary number(8digits): ");
	scanf_s("%d", &bi_num);

	int t_bi = bi_num;
	int dec = 10000000;
	int bi_count = 0;
	for (int i = 0; i < 4; i++) {
		if (t_bi%10 != t_bi / dec) {
			bi_count++;
		}
		t_bi = (t_bi - (t_bi / dec) * dec) / 10;
		dec /= 100;
	}
	if (bi_count) {
		printf("%d is not a Palindrome. \n", bi_num);
	}
	else {
		printf("%d is a Palindrome. \n", bi_num);
	}

	return 0;	
}

int getNum() {
	int num;
	printf("Enter a number: ");
	scanf_s("%d", &num);
	return num;
}