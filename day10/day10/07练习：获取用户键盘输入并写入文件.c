#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//�ٶ��û�д��":wq"��ֹ�����û����룬��֮ǰ�����ݱ��浽�ļ���
int main(void)
{
	char *filename = "test07.txt";
	FILE* fp = fopen(filename,"a");
	if (fp == NULL)
	{
		perror("fopen error");
		return -1;
	}
	while (1)
	{
		//char* tmp="hello";		//�ᱨ��˵tmpδ���壬�������ǳ����������ԣ���ΪfgetsҪ�ı�tmp��ֵ
		char tmp[4096];			//����һ���㹻��Ļ�����������һ��ռ�Ĭ�ϻ��4kb��4096������ֱ��д4096��С����
		fgets(tmp,4096,stdin);		//����1������ж��û�����Ϊ:wq   strcmp
		if (strcmp(tmp, ":wq\n") == 0)
		{
			break;
		}
		else if (tmp != NULL)		//����2��������û�б�Ҫ�������жϣ��̳�������Ĳ�û�С���������Ҳ����ʵ�֣�tmp�Ǵ���Ļ��ȡ���룬ֻҪû����:wq�Ͳ���ֹͣ
		{
			fputs(tmp, fp);
		}
	}	
	fclose(fp);
	return EXIT_SUCCESS;
}