#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//����Ŀ���ԣ����ԣ�����������Ӳ���
int main09(int argc, char* argv[])
{
	for (size_t i = 0; i < argc; i++)
	{
		printf("argv[%d]=%s\n", i,argv[i]);
	}
	return EXIT_SUCCESS;
}