#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct stuscore
{
	//成员列表
	char *name;
	float *scores;
};
int main10(void)
{
	struct stuscore* p = malloc(sizeof(struct stuscore) * 3);
	for (size_t i = 0; i < 3; i++)
	{
		printf("请输入姓名  成绩：\n");
		p[i].name = (char*)malloc(sizeof(char) * 21);
		p[i].scores = (float*)malloc(sizeof(float) * 3);
		scanf("%s%f%f%f", p[i].name, &p[i].scores[0], &p[i].scores[1], &p[i].scores[2]);
	}
	//冒泡排序
	for (size_t i = 0; i < 3 - 1; i++)
	{
		for (size_t j = 0; j < 3 - i - 1; j++)
		{
			float s1 = p[j].scores[0] + p[j].scores[1] + p[j].scores[2];
			float s2 = p[j + 1].scores[0] + p[j + 1].scores[1] + p[j + 1].scores[2];			
			if (s1 > s2)
			{
				struct stuscore tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}

	for (size_t i = 0; i < 3; i++)
	{
		printf("%s  %.2f  %.2f  %.2f\n", p[i].name, p[i].scores[0], p[i].scores[1], p[i].scores[2]);
	}
	for (size_t i = 0; i < 3; i++)
	{
		free(p[i].name);
		p[i].name = NULL;
		free(p[i].scores);
		p[i].scores = NULL;
	}
	free(p);
	p = NULL;
	return EXIT_SUCCESS;
}