#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct info
{
	//��Ա�б�
	char *name;			//���ṹ������ָ���Ա��������ʼ��
	//char name[20];
	int age;
};
void fun01(struct info s)
{
	strcpy(s.name, "��˹");
	s.age = 19;
	//printf("%s,%d\n", s.name, s.age);		//ֵ���ݣ�����ı�ԭs��ֵ
}
void fun02(struct info *s)
{
	strcpy(s->name, "��˹");
	s->age = 20;
	//printf("%s %d\n", s->name, s->age);		//��ı�ԭs��ֵ
}
struct info fun03(struct info s)
{
	strcpy(s.name, "����");
	s.age = 21;
	return s;
	//printf("%s %d\n", s->name, s->age);		//��ı�ԭs��ֵ
}
int main11(void)
{
	//struct info s ;		//���ṹ������ָ���Ա��������ʼ��������test.c�Ų�  Ҳ����ָ���Ա�����⣬������γ����������Իᱨδ��ʼ��������
	//strcpy(s.name, "����");
	//s.age = 18;
	struct info s = { "����",18 };
	printf("s %s %d\n", s.name, s.age);
	fun01(s);
	printf("s1 %s %d\n", s.name, s.age);	//ֵ���ݣ�����ı�ԭs��ֵ
	fun02(&s);
	printf("s2 %s %d\n", s.name, s.age);	//��ַ���ݣ���ı�ԭs��ֵ
	fun03(s);
	printf("s3 %s %d\n", s.name, s.age);	//����ֵ�������ܣ�����ı�ԭs��ֵ
	s = fun03(s);
	printf("s4 %s %d\n", s.name, s.age);	//����ֵ�����գ���ı�ԭs��ֵ
	return EXIT_SUCCESS;
}