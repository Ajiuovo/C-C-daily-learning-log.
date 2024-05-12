#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void write_file();
void read_file();
void test_feof();
int main05(void)
{
	//write_file();
	//read_file();
	test_feof();		//feof�������Բ���
	return EXIT_SUCCESS;
}

void write_file()
{
	char *filename = "test05.txt";
	FILE* fp = fopen(filename, "w");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}
	char buffer[] = "abced";
	int len = strlen(buffer);
	fputc('i', fp);
	fputc(-1, fp);
	for (size_t i = 0; i < len; i++)
	{
		int ret = fputc(buffer[i], fp);
		if (ret == -1)
		{
			perror("fputc error");
			return;
		}
	}
	fclose(fp);
}
void read_file()
{	
	char* filename = "test05.txt";
	FILE* fp = fopen(filename, "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}
	while (1)
	{
		char c = fgetc(fp);
		//if (c == -1)		//��д�ļ�ʱ��fclose��Ĭ����ӽ������EOF��EOF==-1������Ҳ����д�ɣ� ch==EOF
		if(feof(fp))		//ʹ��feof�����ж��Ƿ񵽴��ļ���β��������0��δ�����ļ���β�����ط�0ֵ���ѵ����ļ���β
		{
			break;
		}
		printf("%c\n", c);		
	}
	fclose(fp);
}


void test_feof()
{
	char* filename = "test05.txt";
	FILE* fp = fopen(filename,"r"); 
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}
	
	while (1)
	{
		printf("û�е����ļ���β\n");
		fgetc(fp);			//��Ӻ�feof���ܻ�ȡ�������ַ�
		//char c = fgetc(fp);		
		if (feof(fp))		//feof���ԣ���ʹ�øú���֮ǰ�����ж��ļ�����������
		{
			break;
		}
	}
	fclose(fp);
}