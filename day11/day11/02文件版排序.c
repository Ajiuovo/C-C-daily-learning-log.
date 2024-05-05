#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//任务：生成随机数，写入文件。将文件内乱序随机数读出，排好序再写回文件
void write_rand()
{
	//打开文件
	FILE* fp = fopen("test02.txt", "w");
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	//生成随机数并写入
	srand(time(NULL));
	for (size_t i = 0; i < 10; i++)
	{
		fprintf(fp, "%d\n", rand() % 100);
	}
	fclose(fp);	
}
void Bubble_Sort(int* src, int len)
{
	for (size_t i = 0; i < len-1; i++)
	{
		for (size_t k = 0; k < len-i-1; k++)
		{
			if (src[k] < src[k + 1])
			{
				int tmp = src[k + 1];
				src[k + 1] = src[k];
				src[k] = tmp;
			}
		}

	}
}
void read_rand()
{
	int result[10] = { 0 };
	//打开文件
	FILE* fp = fopen("test02.txt", "r");
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	//读出随机数
	int i = 0;
	while (1)
	{
		fscanf(fp, "%d\n",&result[i]);
		printf("%d ", result[i]);
		i++;
		if (feof(fp))
			break;  
	}
	fclose(fp);
	//排序
	Bubble_Sort(result, 10);
	//将排好序的随机数写进去
	FILE* fp2 = fopen("test02.txt", "w");
	for (size_t j = 0; j < 10; j++)
	{
		fprintf(fp2, "%d\n", result[j]);
	}
	fclose(fp2);
}

int main02 (void)
{
	write_rand();
	getchar();
	read_rand();
	return EXIT_SUCCESS;
}