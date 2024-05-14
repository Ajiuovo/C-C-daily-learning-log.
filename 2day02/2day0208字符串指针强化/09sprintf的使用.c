#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void test01()
{
	char buf[ 1024 ];
	memset(buf, 0, 1024);
	sprintf(buf, "今天%d年 %d月 %d日\n",2024,5,12)
		printf("%s\n", buf);
}
int main(void)
{
	test01();
	return EXIT_SUCCESS;
}