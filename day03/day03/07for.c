#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main07(void)
{
	for (int i = 1, j = 2,a=0;i < 1, j < 2, a == 0; i++, j++,a++)
	{
		printf("i=%d", i);
		printf("j=%d", j);
	}
	return 0;
}