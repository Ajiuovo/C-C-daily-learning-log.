#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main0401(void)
{
	char* filename = "test04.txt";
	FILE* fp = fopen(filename, "w");
	if (fp == NULL)
	{
		perror("fopen error");		//详细展示错误
		return -1;
	}
	int ret=fputc('A', fp);
	printf("%d\n", ret);
	fclose(fp);
	return EXIT_SUCCESS;
}
//写入26个字母向文件中，方法①
int main0402(void)
{
	char* filename = "test0402.txt";
	FILE* fp = fopen(filename, "w");
	if (fp == NULL)
	{
		perror("fopen error");		//详细展示错误
		return -1;
	}
	char ch = 'a';
	while (ch <= 'z')
	{
		int ret=fputc(ch, fp);
		if (ret == -1)
		{
			perror("fopen error");		//详细展示错误
			return -1;
		}
		ch++;
	}
	fclose(fp);
	return EXIT_SUCCESS;
}
//写入26个字母向文件中，方法②
int main0403(void)
{
	char buf[] = "abcdefghijklmnopqrstuvwxyz";
	char* filename = "test0403.txt";
	FILE* fp = fopen(filename, "w");
	if (fp == NULL)
	{
		perror("fopen error");		//详细展示错误
		return -1;
	}
	int n = strlen(buf);
	for (size_t i = 0; i < n; i++)
	{
		int ret = fputc(buf[i], fp);
		if (ret == -1)
		{
			perror("fputc error");		//详细展示错误
			return -1;
		}
	}
	fclose(fp);
	return EXIT_SUCCESS;
}
//读fgetc
int main0404(void)
{
	char* filename = "test0403.txt";
	FILE* fp = fopen(filename, "r");
	if (fp == NULL)
	{
		perror("fopen error");		//详细展示错误
		return -1;
	}
	while (1)
	{
		char ch=fgetc(fp);
		printf("%d\n", ch);
		if (ch == -1)		//在写文件时，fclose会默认添加结束标记EOF，EOF==-1，所以也可以写成， ch==EOF
		{
			break;
		}	
	}
	fclose(fp);
	return EXIT_SUCCESS;
}