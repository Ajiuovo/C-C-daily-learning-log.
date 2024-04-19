#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	goto LABLE;
	printf("11111111");
	printf("2");
LABLE:
	printf("3");
	return 0;
}