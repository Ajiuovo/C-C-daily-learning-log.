#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct stu
{
	//��Ա�б�
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
		printf("�������� ����  ���� �绰 �ɼ� �Ա�\n");
		//ע������ṹ���еı����ͳ����ĸ�ֵ
		scanf("%s%d%s%f%f%f,%c",s[i].name,&s[i].age,s[i].tel,&s[i].score[0], &s[i].score[1], &s[i].score[2],&s[i].sex);
	}
	for (size_t i = 0; i < 2; i++)
	{
		printf("����:%s\n", s[i].name);
		printf("����:%d\n", s[i].age);
		printf("�绰:%s\n", s[i].tel);
		printf("�ɼ�:%.1f %.1f %.1f\n", s[i].score[0], s[i].score[1], s[i].score[2]);
		printf("�Ա�:%s\n", s[i].sex == 'M' ? "��" : "Ů");
	}
	return EXIT_SUCCESS;
}