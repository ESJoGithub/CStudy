#include <stdio.h>
#include "methods.h"

void sp1()
{
	int num;
	printf("���ڸ� �ϳ� �Է����ּ���: ");
	scanf_s("%d", &num, sizeof(num));
	if (num % 2 == 0)
	{
		printf("%d�� ¦���Դϴ�.\n", num);
	}
	else
	{
		printf("%d�� Ȧ���Դϴ�.\n", num);
	}

	return 0;
}

void sp2_1(int num1, int num2, int num3, int num4, int num5) {

	int max;
	if (num1 > num2) {
		if (num1 > num3) {
			if (num1 > num4) {
				if (num1 > num5) {
					max = num1;
				}
				else {
					max = num5;
				}
			}
			else if (num4 > num5) {
				max = num4;
			}
			else {
				max = num5;
			}
		}
		else if (num3 > num4) {
			if (num3 > num5) {
				max = num3;
			}
			else {
				max = num5;
			}
		}
		else if (num4 > num5) {
			max = num4;
		}
		else {
			max = num5;
		}
	}
	else if (num2 > num3) {
		if (num2 > num4) {
			if (num2 > num5) {
				max = num2;
			}
			else {
				max = num5;
			}
		}
		else if (num4 > num5) {
			max = num4;
		}
		else {
			max = num5;
		}
	}
	else {
		if (num3 > num4) {
			if (num3 > num5) {
				max = num3;
			}
			else {
				max = num5;
			}
		}
		else {
			if (num4 > num5) {
				max = num4;
			}
			else {
				max = num5;
			}
		}
	}
	printf("���� ū ���� %d\n", max);
}

void sp2_2(int num1, int num2, int num3, int num4, int num5) {

	int max = num1;
	if (num2 > max) {
		max = num2;
	}
	if (num3 > max) {
		max = num3;
	}
	if (num4 > max) {
		max = num4;
	}
	if (num5 > max) {
		max = num5;
	}
	printf("���� ū ���� %d\n", max);
}

void sp3() {
	int num1, num2, num3;
	printf("���ڸ� �� �� �Է����ּ���: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	float aver = (num1 + num2 + num3) / 3.0;

	if (aver > 10.0) {
		printf("Average: %.2f\n", aver);
		int tmp_num;
		printf("���ڸ� �ϳ� �Է����ּ���: ");
		scanf_s("%d", &tmp_num);
		if (tmp_num > aver) {
			printf("Average %.2f + new number %d = %.2f\n", aver, tmp_num, aver + tmp_num);
		}
	}
	else if (aver >= 5.0 && aver <= 8.0) {
		printf("Average is %.2f is between 5.0 and 8.0 \nNumbers: %d, %d, %d\n", aver, num1, num2, num3);
	}
	else if (aver < 0) {
		int num4, num5, num6;
		printf("���ڸ� �� �� �Է����ּ���: ");
		scanf_s("%d %d %d", &num4, &num5, &num6);

		float aver2 = (num4 + num5 + num6) / 3.0;

		if (aver2 >= 0) {
			printf("Average is %.2f \nNumbers:  %d, %d, %d\n", aver2, num4, num5, num6);
		}
		else {
			char name[20];
			printf("Enter your name: ");
			scanf_s("%s", name, sizeof(name));
		}
	}
	else {
		printf("Numbers: % d, % d, % d\n", num1, num2, num3);
	}
}