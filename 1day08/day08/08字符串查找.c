#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main08(void)
{

	char *str = "!!hellaw";
	printf("%s\n", strchr(str, 'a'));
	printf("%s\n", strrchr(str, 'a'));
	char* ret = strstr(str, "hea");
	printf("%s\n", ret);
	return EXIT_SUCCESS;
}