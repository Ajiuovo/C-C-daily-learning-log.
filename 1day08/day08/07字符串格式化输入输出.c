#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main0701(void)
{
	int a,b,c;
	scanf("%d+%d=%d", &a, & b, & c);
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);
	int a2, b2, c2;
	char str[] = "15+15=30";
	sscanf(str,"%d+%d=%d", &a2, &b2, &c2);
	printf("a2=%d\n", a2);
	printf("b2=%d\n", b2);
	printf("c2=%d\n", c2);

	return EXIT_SUCCESS;
}

int main0702(void)
{
	int a=15, b=15, c=30;
	char str[20] = {0};
	printf("%d%c%d=%d\n", a,'+', b, c);
	sprintf(str, "%d%c%d=%d\n",a, '+',b, c);
	puts(str);
	return EXIT_SUCCESS;
}