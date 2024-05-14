#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//作用1：拼接字符串
void test01()
{
	//①
	char buf[1024];
	memset(buf, 0, 1024);
	sprintf(buf, "今天%d年 %d月 %d日", 2024, 5, 12);
	printf("%s\n", buf);
	//②
	memset(buf, 0, 1024);
	char str1[] = "hello";
	char str2[] = "hello";
	int ret = sprintf(buf, "%s %s", str1, str2);		//返回值是字符串长度，不包含\0
	printf("%s  %d\n", buf, ret);

	//③数字转字符串
	memset(buf, 0, 1024);
	int num = 100;
	sprintf(buf, "%d",num);
	printf("%s\n", buf);
}
int main(void)
{
	test01();
	return EXIT_SUCCESS;
}