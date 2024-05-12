#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(void)
{
	char str1[] = "12ges0";
	int num1 = atoi(str1);
	printf("%d\n", num1);

	char str2[] = "             a-10";
	int num2 = atoi(str2);
	printf("%d\n", num2);

	char str3[] = "0.123";
	double num3 = atof(str3);
	printf("%lf\n", num3);

	char str4[] = "123L";
	long num4 = atol(str4);
	printf("%ld\n", num4);

	return EXIT_SUCCESS;
}