#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct stu
{
	char name[100];
	int age;
	int Id;
	double score;
};
//1��const�����βΣ���ֹ������޸�
void showStu(struct stu s)		//ֵ���ݣ�����sʱ��ͨ��������һ�����ݣ�����Ҫ���ʵ��������Ƚϴ�ʱ�������Ĵ�����Դ
{
	s.age = 100;
	printf("%s %d %d %f\n", s.name, s.age, s.Id, s.score);
}
void showStu2(struct stu *s)		//��ʡ��Դ
{
	s->age = 100;
	printf("%s %d %d %f\n", s->name, s->age, s->Id, s->score);
}
void showStu2(const struct stu* s)		//��ʡ��Դ
{
	//s->age = 100;
	printf("%s %d %d %f\n", s->name, s->age, s->Id, s->score);
}
void test01()
{
	struct stu s = { "Alex",18,1,70 };
	showStu(s);
	printf("%s %d %d %f\n", s.name, s.age, s.Id, s.score);		//ʹ��ֵ���ݵķ�ʽ�������޸Ľṹ���ֵ
	struct stu* s1 = &s;
	showStu2(s1);
	printf("%s %d %d %f\n", s.name, s.age, s.Id, s.score);		//�����ַ����޸Ľṹ���ֵ
	showStu2(s1);
	printf("%s %d %d %f\n", s.name, s.age, s.Id, s.score);		//��Ƚ�ʡ��Դ��Ҳ���ֹ�����
}
int main(void)
{
	test01();
	return EXIT_SUCCESS;
}