#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//txt文件拷贝
void myfile_copy()
{
	FILE* rp = fopen("test0401.txt", "r");
	FILE* wp = fopen("test0402.txt", "w");
	//检查文件打开情况
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
	//定义缓冲区  其实缓冲区类型无所谓。通常定义为char，因为一个字符是一个字节，方便计算数据大小。
	char buf[4096] = {0};
	//copy
	while (1)
	{
		//清空缓冲区
		memset(buf, 0, sizeof(buf));
		int ret = fread(buf,1,sizeof(buf),rp);
		if (ret==0)
		{
			break;
		}
		fwrite(buf, 1, ret, wp);	//注意这里一定要将参3设置为ret，即，读了多少就写入多少。
	}
	//关闭文件
	fclose(rp);
	fclose(wp);
}
//二进制文件拷贝
void file_copy()
{
	FILE* rp = fopen("000_6164-2.jpg", "rb");		//二进制文件要r -> rb
	FILE* wp = fopen("000_6164-2_2.jpg", "wb");
	//检查文件打开情况
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
	//定义缓冲区
	char buf[4096] = { 0 };
	//copy
	while (1)
	{
		int ret = fread(buf, 1, sizeof(buf), rp);
		if (ret == 0)
		{
			break;
		}
		fwrite(buf, 1, ret, wp);	//注意这里一定要将参3设置为ret，即，读了多少就写入多少。
	}
	//关闭文件
	fclose(rp);
	fclose(wp);
}
int main04(void)
{
	//myfile_copy();
	file_copy();
	return EXIT_SUCCESS;
}