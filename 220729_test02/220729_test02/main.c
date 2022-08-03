#include <stdio.h>
int main()
{
	printf("정수를 입력하세요: ");
	int number;
	scanf_s("%d", &number);
	printf("입력한 숫자: %d\n\n", number);

	printf("정수를 두 개 입력하세요: ");
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("두 숫자의 합: %d\n\n", num1+num2);

	printf("실수를 두 개 입력하세요: ");
	float f_num1, f_num2;
	scanf_s("%f %f", &f_num1, &f_num2);
	printf("두 숫자의 곱: %f\n\n", f_num1 * f_num2);

	printf("정수를 두 개 입력하세요: ");
	int i_num1, i_num2;
	scanf_s("%d %d", &i_num1, &i_num2);
	printf("%d에서 %d를 나눈 몫: %d, 나머지: %d\n\n", i_num1, i_num2, i_num1 / i_num2, i_num1 % i_num2);

	int a;
	float b;
	double c;
	char d;
	printf("int의 크기는 %zu byte\n", sizeof(a));
	printf("float의 크기는 %zu byte\n", sizeof(b));
	printf("double의 크기는 %zu byte\n", sizeof(c));
	printf("char의 크기는 %zu byte\n", sizeof(d));
}
