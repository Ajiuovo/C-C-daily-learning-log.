#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main06(void)
{
	char buf[10] = {0};
	//printf("%s\n",fgets(buf, 10, stdin));
	int ret = fputs(fgets(buf, 10, stdin),stdout);
	printf("%d\n", ret);
	return EXIT_SUCCESS;
}