#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//���������������д���ļ������ļ�������������������ź�����д���ļ�
void write_rand()
{
	//���ļ�
	FILE* fp = fopen("test02.txt", "w");
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	//�����������д��
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
	//���ļ�
	FILE* fp = fopen("test02.txt", "r");
	if (!fp)
	{
		perror("fopen error");
		return -1;
	}
	//���������
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
	//����
	Bubble_Sort(result, 10);
	//���ź���������д��ȥ
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