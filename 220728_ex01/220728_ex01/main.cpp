//�ּ�ó��
/*�ּ�
ó��*/
// �����(F5) - �ڵ� �м�, ���� ���� ���� �м�
// ����(Release) - ���� ���� ���� �м��� ���� ���� ������ ���·� ����. ����

#include <stdio.h>
#define PI 3.14 // main �ȿ� �ۼ��ص� ������
//const int num4 = 5;

int main() 
{
	int num1, num2;
	float num3;
	const int num4 = 5; //�ʱ�ȭ �ʼ�, main�Լ� �ۿ� ���⵵ ��

	num1 = 10.5;
	num2 = 20;
	num3 = 5.5f;
	num1 += num3;
	num3 += PI;

	//printf(num1)�ϸ� �����߻�!
	printf("%f\n", (float)num1);
	printf("%d\n", num2);
	printf("%f\n", num3);

	return 0;
}