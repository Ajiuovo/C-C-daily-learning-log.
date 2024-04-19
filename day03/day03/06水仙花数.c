#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main06(void)
{
	int num = 100;
	int a, b, c;
	do {
		a = num % 10;
		b = num / 10%10;
		c = num / 100;
		if (a * a * a + b * b * b + c * c * c == num)
		{
			printf("%d是水仙花数\n", num);
		}
		num++;
	} while (num < 1000);
	return 0;
}