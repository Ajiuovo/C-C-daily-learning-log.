#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main10(void)
{
	char* ret = strstr("hellollolloef", "llllo");	//strstr，返回值：子串在原字符串中的位置，如果没有，NULL；
	printf("%s\n", ret);
	return EXIT_SUCCESS;
}