#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int myStrstr(char* str, char* p)
{
	int num = 0;
	char* start = str;
	while (*str!='\0')
	{
		if (*str!=*p)
		{
			str++;
			num++;
			continue;
		}
		//创建两个临时指针，做二次对比
		char* tmp = str;
		char* tmp2 = p;
		while (*tmp2!=0)
		{
			if (*tmp!=*tmp2)
			{
				str++;
				num++;
				break;
			}
			tmp++;
			tmp2++;
		}
		if (*tmp2 == '\0')
		{
			printf("%d\n", num);
			return num;
		}
	}
	return -1;
}

/*
* 优化，memcmp(str,subStr,3)或strncmp(str,subStr, 3)
* 两者区别：strncmp其结束条件包括任一字符串结束和比较完n个字节。而memcmp即使字符串已经结束，仍然要比较剩余的空间，直到比较完n个字节。
*/
int myStrstr2(char* str, char* p)
{
	int num = 0;
	char* start = str;
	while (*str != '\0')
	{
		if (*str != *p)
		{
			str++;
			num++;
			continue;
		}
		int ret = strncmp(str, p, 3);		//返回值为0，则前面的两字符串相同。
		if (ret==0)
		{
			printf("%d\n", num);
			return num;
		}
		str++;
		num++;
	}
	return -1;
}
int main(void)
{
	char* str = "pgodnsdnfdwao";
	//int ret = myStrstr(str, "dnf");
	int ret2 = myStrstr2(str, "dnf");
	return EXIT_SUCCESS;
}