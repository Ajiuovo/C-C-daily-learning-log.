#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include<sys/stat.h>
#include<sys/types.h>
int main(void)
{
	struct stat buf;
	int ret = stat("test06.txt",&buf);	//�����������ں������ý���ʱ���䵱��������ֵ
	printf("�ļ���С=%d", buf.st_size);		//�ڲ����ļ��������»�ȡ�ļ���С

	return EXIT_SUCCESS;
}