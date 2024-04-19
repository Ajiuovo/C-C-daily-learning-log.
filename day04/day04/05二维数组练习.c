#define _CRT_SECURE_NO_WARNINGS			//一定得放在第一行
#include <stdio.h>


int main05(void)
{
	int scores[5][3];
	int row = sizeof(scores) / sizeof(scores[0]);
	int col = sizeof(scores[0]) / sizeof(scores[0][0]);
	//获取五名学生三门功课的成绩
	//56 78 92 45 67 98 28 93 88 93 56 89 72 83 81
	for (size_t i = 0; i<row; i++)
	{
		for (int j = 0; j<col; j++)
		{
			scanf("%d", &scores[i][j]);
		}
	}
	int sum[5] = { 0 };
	//求每个学生的总成绩
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