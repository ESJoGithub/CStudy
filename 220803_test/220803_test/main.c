#include <stdio.h>
#include <math.h>
#include "methods.h"

int main() 
{
	// 1. �Ǽ� 10�� ���� �� �հ�/��� ���
	char msg1[50] = "[Enter 10 values]";

	float a[10];
	int f_size = sizeof(a) / sizeof(float); // �迭 ���̸� �� �� ���� �� �̷��� ��.

    get_f(a, msg1, f_size);
	f_Aver(a, f_size);


	// 2. ���� 10�� ���� �� ū ������� ����
	int b[10];
	int i_size = sizeof(b) / sizeof(int);
	get_i(b, msg1, i_size);
	display(b, i_size);
	sort(b, i_size);

	// 3. ���� 10�� ���� �� ���, ǥ������ ����
	float average = i_Aver(b, i_size);
	get_stdev(b, i_size, average);
	 
	// RC. 4x4 ũ���� �迭 2���� ���� �Է�, ��/�� ���ϱ�
	char msg2[50] = "[Enter 4x4 values]";
	int x[RC][RC], y[RC][RC];

	get_matirx(x, msg2);
	get_matirx(y, msg2);
	display_matirx(x);
	display_matirx(y);
	sum_matirx(x, y);
	product_matirx(x, y);


	return 0;
}
