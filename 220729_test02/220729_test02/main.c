#include <stdio.h>
int main()
{
	printf("������ �Է��ϼ���: ");
	int number;
	scanf_s("%d", &number);
	printf("�Է��� ����: %d\n\n", number);

	printf("������ �� �� �Է��ϼ���: ");
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("�� ������ ��: %d\n\n", num1+num2);

	printf("�Ǽ��� �� �� �Է��ϼ���: ");
	float f_num1, f_num2;
	scanf_s("%f %f", &f_num1, &f_num2);
	printf("�� ������ ��: %f\n\n", f_num1 * f_num2);

	printf("������ �� �� �Է��ϼ���: ");
	int i_num1, i_num2;
	scanf_s("%d %d", &i_num1, &i_num2);
	printf("%d���� %d�� ���� ��: %d, ������: %d\n\n", i_num1, i_num2, i_num1 / i_num2, i_num1 % i_num2);

	int a;
	float b;
	double c;
	char d;
	printf("int�� ũ��� %zu byte\n", sizeof(a));
	printf("float�� ũ��� %zu byte\n", sizeof(b));
	printf("double�� ũ��� %zu byte\n", sizeof(c));
	printf("char�� ũ��� %zu byte\n", sizeof(d));
}
