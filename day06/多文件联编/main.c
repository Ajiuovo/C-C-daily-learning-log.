#define _CRT_SECURE_NO_WARNINGS			//一定得放在第一行
#include "head.h"

int main(void)
{
	int a = 32;
	int b = 30;
	printf("%d + %d = %d\n", a, b, add(a,b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	printf("%d x %d = %d\n", a, b, mul(a, b));

}