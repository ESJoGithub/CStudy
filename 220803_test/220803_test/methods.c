#include <stdio.h>
#include <math.h>
#include "methods.h"

void get_f(float num[], char msg[], int size) {
	printf("%s\n", msg);
	for (int i = 0; i < size; i++) {
		printf("Number[%d]: ", i + 1);
		scanf_s("%f", &num[i], sizeof(num[i]));
	}
}

void f_Aver(float num[], int size) {
	float sum = 0;
	for (int i = 0; i < size; i++) {
		sum += num[i];
	}
	printf("Sum: %.1f, Average: %.2f\n", sum, sum / (float)size);
}

void get_i(int num[], char msg[], int size) {
	printf("%s\n", msg);
	for (int i = 0; i < size; i++) {
		printf("Number[%d]: ", i + 1);
		scanf_s("%d", &num[i], sizeof(num[i]));
	}
}

void sort(int num[], int size) {
	for (int i = 0; i < size - 1; i++) {
		int max = i;
		for (int j = i + 1; j < size; j++) {
			if (num[j] > num[max]) {
				max = j;
			}
		}
		int temp = num[i];
		num[i] = num[max];
		num[max] = temp;
	}
	display(num, size);
}

void display(int num[], int size) {
	printf("result: { ");
	for (int i = 0; i < size; i++) {
		printf("%d", num[i]);
		if (i < size - 1) {
			printf(", ");
		}
		else {
			printf(" }\n");
		}
	}
}

float i_Aver(int num[], int size) {
	int sum = 0;
	float aver;
	for (int i = 0; i < size; i++) {
		sum += num[i];
	}
	aver = sum / (float)size;

	printf("Average: %.2f\n", aver);
	return aver;
}

void get_stdev(int num[], int size, float average) {

	float sum = 0;
	float stddev = 0;
	for (int i = 0; i < size; i++) {
		sum += pow((average - num[i]), 2);
	}
	stddev = sqrt(sum / (float)size);
	printf("Standard Deviation: %.2f\n", stddev);
}

void get_matirx(int num[RC][RC], char msg[]) {
	printf("%s\n", msg);
	for (int i = 0; i < RC; i++) {
		printf("Raw %d: ", i + 1);
		for (int j = 0; j < RC; j++) {
			scanf_s("%d", &num[i][j], sizeof(num[i][j]));
		}
	}
}

void display_matirx(int num[RC][RC]) {
	printf("---[result]--- \n");
	for (int i = 0; i < RC; i++) {
		for (int j = 0; j < RC; j++) {
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void sum_matirx(int num1[RC][RC], int num2[RC][RC]) {
	int result[RC][RC];
	for (int i = 0; i < RC; i++) {
		for (int j = 0; j < RC; j++) {
			result[i][j] = num1[i][j] + num2[i][j];
		}
	}
	display_matirx(result);
}

void product_matirx(int num1[RC][RC], int num2[RC][RC])
{
	int result[RC][RC];
	for (int i = 0; i < RC; i++) {
		for (int j = 0; j < RC; j++) {
			result[i][j] = 0; // 초기화 중요!
			for (int k = 0; k < RC; k++) {
				result[i][j] += (num1[i][k] * num2[k][j]);
			}
		}
		printf("\n");
	}
	display_matirx(result);
}