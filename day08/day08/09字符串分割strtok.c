#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main09(void)
{
	char str[] = "www.baidu.com";
	//char *str2 = "www.baidu.com";		//������,�����ַ�����������strtok��ı�ԭ�����������ɱ��ı䡣
	//strtok("www.baidu.com", ".");			//������,���������Ҳ���ַ���������

	char *p=strtok(str, ".");			//��һ�β�֣�����1��  ����ֵ�ԭ��
	printf("%s\n", p);	
	while (p!=NULL)
	{
		//strtok(str, ".");			//�����ԣ�str�ĵ�һ���ָ������ѱ��滻Ϊ'\0'
		p=strtok(NULL,".");			//�ٴβ��ʱ������1Ҫ����ΪNULL�������ڲ���һ����̬��������¼�ŵ�һ�β��ʣ�µ��ִ�������ΪNULL���Զ�����þ�̬������
		printf("%s\n", p);
	}
	/*for (size_t i = 0; i < 13; i++)
	{
		printf("%c ", str[i]);
	}
	printf("\n");*/
	return EXIT_SUCCESS;
}