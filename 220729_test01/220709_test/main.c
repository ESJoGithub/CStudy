#include <stdio.h>
#include "params.h"
#include "method.h"

int main()
{
	printf("%s", "e-receipt/History\n\n");
	printf("%-18s %s %18s \n", " ", "\033[1mSTARBUCKS\033[0m", " ");
	printf("%30s \n\n", "현금(소득공제)");
	printf("%-25s %25s \n", "서소문배제점", "서울 중구 서소문로 99");
	printf("%-25s %25s \n", "대표: 이석구 201-81-21515", "02-758-8409");
	printf("%-25s %25s \n\n", "[매장#9609, POS 01]", "2018-01-26 11:52:06");
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

	printf("%-25s %10d %4d %9d \n", "T)카페라테", latte, count, latte*count);
	printf("%-25s %10d %4d %9d \n\n", "ㄴ두유", soymilk, count, soymilk * count);
	for (int i = 0; i < 51; i++)
	{
		printf("%c", '-');
	}
	printf("\n\n");

	int total = add(latte * count, soymilk * count);
	int tex = caltex(total);
	printf("%-25s %14s %10d \n", "결제금액", "->",  total);
	printf("%-45s (%3d) \n\n", "(부가세포함)", tex);
	for (int i = 0; i < 51; i++)
	{
		printf("%c", '-');
	}
	printf("\n\n");

	printf("%-25s %25s \n", "스타벅스카드", "4,600");
	printf("%s \n", "스타벅스카드");
	printf("%-25s %25s \n", "승인번호:", "카드잔액: 100");
	printf("%s \n", "잔액이 얼마 남지 않았습니다. 충전하세요~");
	for (int i = 0; i < 51; i++)
	{
		printf("%c", '-');
	}
	printf("\n");
	printf("\u25A0%s \n", "마이 스타벅스 리워드");
	printf("%s \n", "*골드레벨(~2019/08/19까지 유지)");
	printf("%s \n\n", "*쿠폰:0개 별:6개(무료 음료까지 6개 필요)");
	for (int i = 0; i < 51; i++)
	{
		printf("%c", '-');
	}
	printf("\n\n");

	return 0;
}