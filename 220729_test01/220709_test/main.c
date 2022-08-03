#include <stdio.h>
#include "params.h"
#include "method.h"

int main()
{
	printf("%s", "e-receipt/History\n\n");
	printf("%-18s %s %18s \n", " ", "\033[1mSTARBUCKS\033[0m", " ");
	printf("%30s \n\n", "����(�ҵ����)");
	printf("%-25s %25s \n", "���ҹ�������", "���� �߱� ���ҹ��� 99");
	printf("%-25s %25s \n", "��ǥ: �̼��� 201-81-21515", "02-758-8409");
	printf("%-25s %25s \n\n", "[����#9609, POS 01]", "2018-01-26 11:52:06");
	for (int i = 0; i < 51; i++)
	{
		printf("%c", '-');
	}
	printf("\n\n");

	printf("%28s \n\n", "(A-05)");
	for (int i = 0; i < 51; i++)
	{
		printf("%c", '-');
	}
	printf("\n\n");

	printf("%-25s %10d %4d %9d \n", "T)ī�����", latte, count, latte*count);
	printf("%-25s %10d %4d %9d \n\n", "������", soymilk, count, soymilk * count);
	for (int i = 0; i < 51; i++)
	{
		printf("%c", '-');
	}
	printf("\n\n");

	int total = add(latte * count, soymilk * count);
	int tex = caltex(total);
	printf("%-25s %14s %10d \n", "�����ݾ�", "->",  total);
	printf("%-45s (%3d) \n\n", "(�ΰ�������)", tex);
	for (int i = 0; i < 51; i++)
	{
		printf("%c", '-');
	}
	printf("\n\n");

	printf("%-25s %25s \n", "��Ÿ����ī��", "4,600");
	printf("%s \n", "��Ÿ����ī��");
	printf("%-25s %25s \n", "���ι�ȣ:", "ī���ܾ�: 100");
	printf("%s \n", "�ܾ��� �� ���� �ʾҽ��ϴ�. �����ϼ���~");
	for (int i = 0; i < 51; i++)
	{
		printf("%c", '-');
	}
	printf("\n");
	printf("\u25A0%s \n", "���� ��Ÿ���� ������");
	printf("%s \n", "*��巹��(~2019/08/19���� ����)");
	printf("%s \n\n", "*����:0�� ��:6��(���� ������� 6�� �ʿ�)");
	for (int i = 0; i < 51; i++)
	{
		printf("%c", '-');
	}
	printf("\n\n");

	return 0;
}