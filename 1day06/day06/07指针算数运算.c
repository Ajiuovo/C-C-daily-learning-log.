#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//ָ�������ڼӼ�����
int main0701(void)
{
	int a[10] = {0};
	int* p = &a[5];
	printf("%p\n", p - 2);
	printf("%p\n", &a[3]);

	return EXIT_SUCCESS;
}

//&������  +1�ƶ�һ��������Ĵ�С��һ�㲻��
int main0702(void)
{
	int a[10] = { 0 };
	printf("&a[0]=%p\n", &a[0]);
	printf("a=%p\n", a);
	printf("a+1=%p\n", a+1);
	printf("&a=%p\n", &a);
	printf(" &a+1=%p\n", &a+1);

	return EXIT_SUCCESS;
}

int main0703(void)
{
	int a[10] = { 0 };
	printf("%d\n", sizeof(a));
	return EXIT_SUCCESS;
}