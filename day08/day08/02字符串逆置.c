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

//����ˮ��
void str_inverse(char* str)
{
	char* start = str;				//��¼��βԪ�ص�ַ
	char* end = str + strlen(str)-1;
	while (start < end)				//�ж���Ԫ�ص�ַ�Ƿ�С�����һ��Ԫ�ص�ַ
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
