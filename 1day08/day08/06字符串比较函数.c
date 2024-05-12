#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main06(void)
{
	char dest[20] = "!!hellw";
	char dest2[20] = "!!hellaw";
	int ret = strcmp(dest, dest2);
	int ret2 = strncmp(dest, dest2,8);
	printf("%d\n", ret);
	printf("%d\n", ret2);
	return EXIT_SUCCESS;
}