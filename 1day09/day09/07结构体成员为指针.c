#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct score1 
{
	//��Ա�б�
	char *name;
	float score[3];
};
struct stuinfo
{
	//char name[21];		//ջ�ռ���
	char *name;			//������Ҫ���ٶѿռ丨��
	int age;

};
int main0701(void)
{
	struct stuinfo si;
	si.name = (char*)malloc(sizeof(char) * 21);
	strcpy(si.name, "����");
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
		printf("����������  �ɼ���\n");
		scanf("%s%f%f%f", s[i].name, &s[i].score[0], &s[i].score[1], &s[i].score[2]);

	}
	//s[2].name = "hi";			//�����ԣ�char *name�õ���Ϊ�ַ���������
	for (size_t i = 0; i < 3; i++)
	{
		printf("����:%s\n�ɼ���%.1f %.1f %.1f\n", s[i].name, s[i].score[0], s[i].score[1], s[i].score[2]);
	}	
	for (size_t i = 0; i < 3; i++)
	{
		free(s[i].name);
		s[i].name = NULL;
	}
	return EXIT_SUCCESS;
}