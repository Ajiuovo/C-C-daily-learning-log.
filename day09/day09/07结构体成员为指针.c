#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct score1 
{
	//成员列表
	char *name;
	float score[3];
};
struct stuinfo
{
	//char name[21];		//栈空间内
	char *name;			//后续需要开辟堆空间辅助
	int age;

};
int main0701(void)
{
	struct stuinfo si;
	si.name = (char*)malloc(sizeof(char) * 21);
	strcpy(si.name, "张三");
	si.age = 18;
	printf("%s %d\n", si.name, si.age);
	free(si.name);
	si.name = NULL;
	return EXIT_SUCCESS;
}
int main0702(void)
{
	struct score1 s[3];
	for (size_t i = 0; i < 3; i++)
	{
		s[i].name =(char *) malloc(sizeof(char)*21);
		printf("请输入姓名  成绩：\n");
		scanf("%s%f%f%f", s[i].name, &s[i].score[0], &s[i].score[1], &s[i].score[2]);

	}
	//s[2].name = "hi";			//不可以，char *name得到的为字符串常量。
	for (size_t i = 0; i < 3; i++)
	{
		printf("姓名:%s\n成绩：%.1f %.1f %.1f\n", s[i].name, s[i].score[0], s[i].score[1], s[i].score[2]);
	}	
	for (size_t i = 0; i < 3; i++)
	{
		free(s[i].name);
		s[i].name = NULL;
	}
	return EXIT_SUCCESS;
}