#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct sinfo
{
	char* name;
	int age;
}stu;
int main08(void)
{
	struct sinfo* s = &stu;
	//�ṹ���Ա������ʽ
	//��.��Աѡ�񣨶���  ����.��Ա��
	//��->��Աѡ��ָ�룩  ����ָ��->��Ա��
	s->name = malloc(sizeof(char) * 21);
	s->age = 18;
	strcpy(s->name, "����");
	printf("%s  %d\n", s->name, s->age);
	free(s->name);
	s->name = NULL;
	return EXIT_SUCCESS;
}