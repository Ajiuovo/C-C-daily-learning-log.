#define _CRT_SECURE_NO_WARNINGS			//һ���÷��ڵ�һ��
#include <stdio.h>


int main05(void)
{
	int scores[5][3];
	int row = sizeof(scores) / sizeof(scores[0]);
	int col = sizeof(scores[0]) / sizeof(scores[0][0]);
	//��ȡ����ѧ�����Ź��εĳɼ�
	//56 78 92 45 67 98 28 93 88 93 56 89 72 83 81
	for (size_t i = 0; i<row; i++)
	{
		for (int j = 0; j<col; j++)
		{
			scanf("%d", &scores[i][j]);
		}
	}
	int sum[5] = { 0 };
	//��ÿ��ѧ�����ܳɼ�
	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<col; j++)
		{
			sum[i] += scores[i][j];
		}
		printf("%d\n", sum[i]);
	}
	return 0;
}