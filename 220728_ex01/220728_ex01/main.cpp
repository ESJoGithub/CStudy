//주석처리
/*주석
처리*/
// 디버깅(F5) - 코드 분석, 라인 단위 실행 분석
// 실행(Release) - 라인 단위 실행 분석을 위한 정보 제거한 상태로 동작. 빠름

#include <stdio.h>
#define PI 3.14 // main 안에 작성해도 무방함
//const int num4 = 5;

int main() 
{
	int num1, num2;
	float num3;
	const int num4 = 5; //초기화 필수, main함수 밖에 쓰기도 함

	num1 = 10.5;
	num2 = 20;
	num3 = 5.5f;
	num1 += num3;
	num3 += PI;

	//printf(num1)하면 에러발생!
	printf("%f\n", (float)num1);
	printf("%d\n", num2);
	printf("%f\n", num3);

	return 0;
}