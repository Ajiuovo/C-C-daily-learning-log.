#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//txt�ļ�����
void myfile_copy()
{
	FILE* rp = fopen("test0401.txt", "r");
	FILE* wp = fopen("test0402.txt", "w");
	//����ļ������
	if (!rp)
	{
		perror("fopen error");
		return -1;
	}
	if (!wp)
	{
		perror("fopen error");
		return -1;
	}
	//���建����  ��ʵ��������������ν��ͨ������Ϊchar����Ϊһ���ַ���һ���ֽڣ�����������ݴ�С��
	char buf[4096] = {0};
	//copy
	while (1)
	{
		//��ջ�����
		memset(buf, 0, sizeof(buf));
		int ret = fread(buf,1,sizeof(buf),rp);
		if (ret==0)
		{
			break;
		}
		fwrite(buf, 1, ret, wp);	//ע������һ��Ҫ����3����Ϊret���������˶��پ�д����١�
	}
	//�ر��ļ�
	fclose(rp);
	fclose(wp);
}
//�������ļ�����
void file_copy()
{
	FILE* rp = fopen("000_6164-2.jpg", "rb");		//�������ļ�Ҫr -> rb
	FILE* wp = fopen("000_6164-2_2.jpg", "wb");
	//����ļ������
	if (!rp)
	{
		perror("fopen error");
		return -1;
	}
	if (!wp)
	{
		perror("fopen error");
		return -1;
	}
	//���建����
	char buf[4096] = { 0 };
	//copy
	while (1)
	{
		int ret = fread(buf, 1, sizeof(buf), rp);
		if (ret == 0)
		{
			break;
		}
		fwrite(buf, 1, ret, wp);	//ע������һ��Ҫ����3����Ϊret���������˶��پ�д����١�
	}
	//�ر��ļ�
	fclose(rp);
	fclose(wp);
}
int main04(void)
{
	//myfile_copy();
	file_copy();
	return EXIT_SUCCESS;
}