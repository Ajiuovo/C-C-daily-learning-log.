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
		//����������ʱָ�룬�����ζԱ�
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
* �Ż���memcmp(str,subStr,3)��strncmp(str,subStr, 3)
* ��������strncmp���������������һ�ַ��������ͱȽ���n���ֽڡ���memcmp��ʹ�ַ����Ѿ���������ȻҪ�Ƚ�ʣ��Ŀռ䣬ֱ���Ƚ���n���ֽڡ�
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
		int ret = strncmp(str, p, 3);		//����ֵΪ0����ǰ������ַ�����ͬ��
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