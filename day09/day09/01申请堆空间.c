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
	//д���ݵ�malloc�ռ�
	for (size_t i = 0; i < 10; i++)
	{
		p[i] = i + 10;
	}
	//��ȡmalloc�ռ������
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d  ", *(p + i));
	}
	//�ͷ�������ڴ�
	free(p);
	p = NULL;  
	return EXIT_SUCCESS;
}