#include <stdio.h>

int main() {

	int getNum();
	int num = getNum();

	// 9. ��� ���
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			printf("%d\t", i);
		}
	}
	printf("\n");
	printf("---\n");

	// 10. �Ƕ�̵� ���
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
	// %c �տ� ���� ���� ������ �տ� ���� �Է� �� ���͸� operator�� �ν���!

	printf("Enter two numbers: ");
	scanf_s("%d %d", &a, &b);
	// operator �Է��� �տ�, ���� �Է��� �ڿ� �ؾ� �Է� ����

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