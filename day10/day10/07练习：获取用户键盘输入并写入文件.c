#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//假定用户写入":wq"终止接收用户输入，将之前的数据保存到文件。
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
		//char* tmp="hello";		//会报错说tmp未定义，这样的是常量，不可以，因为fgets要改变tmp的值
		char tmp[4096];			//定义一个足够大的缓冲区，申请一块空间默认会给4kb即4096，所以直接写4096大小就行
		fgets(tmp,4096,stdin);		//问题1：如何判断用户输入为:wq   strcmp
		if (strcmp(tmp, ":wq\n") == 0)
		{
			break;
		}
		else if (tmp != NULL)		//问题2：这里有没有必要加条件判断，教程里给出的并没有。呃，不加也可以实现，tmp是从屏幕读取输入，只要没碰到:wq就不会停止
		{
			fputs(tmp, fp);
		}
	}	
	fclose(fp);
	return EXIT_SUCCESS;
}