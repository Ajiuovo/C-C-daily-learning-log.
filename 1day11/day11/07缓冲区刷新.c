#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(void)
{
	FILE* fp = fopen("test07.txt", "w+");
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	char m = 0;
	while (1)
	{
		scanf("%c", &m);
		if (m == ':')
			break;
		//fflush(fp);		//�ֶ�ˢ���ļ����嵽������̣����Լ�ʱ��д�ˡ�
		fputc(m, fp);
	}
	fclose(fp);		//���ļ��ر�ʱ���Զ�ˢ�»�������
	return EXIT_SUCCESS;
}