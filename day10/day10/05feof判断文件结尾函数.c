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
	test_feof();		//feof函数特性测试
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
		//if (c == -1)		//在写文件时，fclose会默认添加结束标记EOF，EOF==-1，所以也可以写成， ch==EOF
		if(feof(fp))		//使用feof函数判断是否到达文件结尾，若返回0则还未到达文件结尾，返回非0值则已到达文件结尾
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
		printf("没有到达文件结尾\n");
		fgetc(fp);			//添加后，feof才能获取到结束字符
		//char c = fgetc(fp);		
		if (feof(fp))		//feof特性：在使用该函数之前必须有读文件操作函数。
		{
			break;
		}
	}
	fclose(fp);
}