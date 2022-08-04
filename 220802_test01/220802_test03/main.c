#include <stdio.h>

int main() {

	int getNum();
	int num = getNum();

	// 9. 약수 출력
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			printf("%d\t", i);
		}
	}
	printf("\n");
	printf("---\n");

	// 10. 피라미드 출력
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 2 * num; j++) {
			if (j >= num - i && j <= num + i) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	int a, b;
	char op;

	printf("Enter an operator(+, -, *, /): ");
	scanf_s(" %c", &op, 1); 
	// %c 앞에 공백 넣지 않으면 앞에 숫자 입력 후 엔터를 operator로 인식함!

	printf("Enter two numbers: ");
	scanf_s("%d %d", &a, &b);
	// operator 입력을 앞에, 숫자 입력을 뒤에 해야 입력 가능

	switch (op) {
		case '+': 
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		case '-':
			printf("%d - %d = %d\n", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d\n", a, b, a * b);
			break;
		case '/':
			printf("%d / %d = %d\n", a, b, a / b);
			break;
		default:
			printf("Operator is not correct.\n");
	}

	return 0;
}

int getNum() {
	int num;
	printf("Enter a number: ");
	scanf_s("%d", &num);
	return num;
}