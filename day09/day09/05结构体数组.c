#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct stu
{
	//成员列表
	char name[20];
	size_t age;
	char tel[16];
	float score[3];
	char sex;
};
int main05(void)
{
	struct stu s[2];
	for (size_t i = 0; i < 2; i++)
	{
		printf("请您输入 姓名  年龄 电话 成绩 性别：\n");
		//注意区别结构体中的变量和常量的赋值
		scanf("%s%d%s%f%f%f,%c",s[i].name,&s[i].age,s[i].tel,&s[i].score[0], &s[i].score[1], &s[i].score[2],&s[i].sex);
	}
	for (size_t i = 0; i < 2; i++)
	{
		printf("姓名:%s\n", s[i].name);
		printf("年龄:%d\n", s[i].age);
		printf("电话:%s\n", s[i].tel);
		printf("成绩:%.1f %.1f %.1f\n", s[i].score[0], s[i].score[1], s[i].score[2]);
		printf("性别:%s\n", s[i].sex == 'M' ? "男" : "女");
	}
	return EXIT_SUCCESS;
}