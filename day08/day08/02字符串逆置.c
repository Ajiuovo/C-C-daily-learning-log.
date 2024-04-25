#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void str_inverse(char* str1);
int main02(void)
{
	char str[] = "ni chou sha chou ni za id";
	str_inverse(str);
	printf("%s\n", str);
	return EXIT_SUCCESS;
}

//三杯水法
void str_inverse(char* str)
{
	char* start = str;				//记录首尾元素地址
	char* end = str + strlen(str)-1;
	while (start < end)				//判断首元素地址是否小于最后一个元素地址
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
