#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include<sys/stat.h>
#include<sys/types.h>
int main06(void)
{
	struct stat buf;
	int ret = stat("test06.txt",&buf);	//传出参数：在函数调用结束时，充当函数返回值
	printf("文件大小=%d", buf.st_size);		//在不打开文件的条件下获取文件大小

	return EXIT_SUCCESS;
}