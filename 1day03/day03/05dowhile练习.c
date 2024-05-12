#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main05(void)
{
	int a = 1;
	do {
		//printf("%d\n", a++);
		//printf("%d\n", ++a);      //两者结果不同，1-9 vs  2-10
		printf("a=%d\n", a);
		a++;

	} while (a < 10);
}