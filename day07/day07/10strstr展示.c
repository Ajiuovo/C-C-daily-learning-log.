#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main10(void)
{
	char* ret = strstr("hellollolloef", "llllo");	//strstr������ֵ���Ӵ���ԭ�ַ����е�λ�ã����û�У�NULL��
	printf("%s\n", ret);
	return EXIT_SUCCESS;
}