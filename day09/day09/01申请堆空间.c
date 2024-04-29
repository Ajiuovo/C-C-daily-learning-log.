#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main01(void)
{
	int arr[10];
	int *p=(int*)malloc(sizeof(int)*10);
	if (p==NULL)
	{
		return - 1;

	}
	//写数据到malloc空间
	for (size_t i = 0; i < 10; i++)
	{
		p[i] = i + 10;
	}
	//读取malloc空间的数据
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d  ", *(p + i));
	}
	//释放申请的内存
	free(p);
	p = NULL;  
	return EXIT_SUCCESS;
}