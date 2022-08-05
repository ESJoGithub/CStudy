#include <stdio.h>
#include <math.h>
#include "methods.h"

int main() 
{
	// 1. 실수 10개 저장 및 합계/평균 출력
	char msg1[50] = "[Enter 10 values]";

	float a[10];
	int f_size = sizeof(a) / sizeof(float); // 배열 길이를 알 수 없을 때 이렇게 함.

    get_f(a, msg1, f_size);
	f_Aver(a, f_size);


	// 2. 정수 10개 저장 및 큰 순서대로 정렬
	int b[10];
	int i_size = sizeof(b) / sizeof(int);
	get_i(b, msg1, i_size);
	display(b, i_size);
	sort(b, i_size);

	// 3. 정수 10개 저장 및 평균, 표준편차 산출
	float average = i_Aver(b, i_size);
	get_stdev(b, i_size, average);
	 
	// RC. 4x4 크기의 배열 2개에 정수 입력, 합/곱 구하기
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
