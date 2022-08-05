#pragma once
#define RC 4

void get_f(float num[], char msg[], int size);
void get_i(int num[], char msg[], int size);
void f_Aver(float num[], int size);
float i_Aver(int num[], int size);
void sort(int num[], int size);
void display(int num[], int size);
void get_stdev(int num[], int size, float average);
void get_matirx(int num[RC][RC], char msg[]);
void display_matirx(int num[RC][RC]);
void sum_matirx(int num1[RC][RC], int num2[RC][RC]);
void product_matirx(int num1[RC][RC], int num2[RC][RC]);