#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int swap(int a, int b);
int swap2(int* a, int* b);
int main01(void)
{
	int m = 20;
	int n = 30;
	swap(m, n);
	printf("m=%d,n=%d\n", m, n);		//不会改变
	swap2(&m, &n);
	printf("m=%d,n=%d", m,n);		//值改变
	return EXIT_SUCCESS;
}

int swap(int a, int b)
{
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	return 0;
}

int swap2(int *a, int *b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
	return 0;
}