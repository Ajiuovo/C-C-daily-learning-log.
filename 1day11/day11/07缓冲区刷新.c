#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(void)
{
	FILE* fp = fopen("test07.txt", "w+");
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	char m = 0;
	while (1)
	{
		scanf("%c", &m);
		if (m == ':')
			break;
		//fflush(fp);		//手动刷新文件缓冲到物理磁盘，可以即时读写了。
		fputc(m, fp);
	}
	fclose(fp);		//当文件关闭时会自动刷新缓冲区。
	return EXIT_SUCCESS;
}