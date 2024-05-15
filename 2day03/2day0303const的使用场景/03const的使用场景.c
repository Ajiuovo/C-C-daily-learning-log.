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
//1、const修饰形参，防止误操作修改
void showStu(struct stu s)		//值传递，访问s时是通过复制了一份数据，当需要访问的数据量比较大时，会消耗大量资源
{
	s.age = 100;
	printf("%s %d %d %f\n", s.name, s.age, s.Id, s.score);
}
void showStu2(struct stu *s)		//节省资源
{
	s->age = 100;
	printf("%s %d %d %f\n", s->name, s->age, s->Id, s->score);
}
void showStu2(const struct stu* s)		//节省资源
{
	//s->age = 100;
	printf("%s %d %d %f\n", s->name, s->age, s->Id, s->score);
}
void test01()
{
	struct stu s = { "Alex",18,1,70 };
	showStu(s);
	printf("%s %d %d %f\n", s.name, s.age, s.Id, s.score);		//使用值传递的方式并不能修改结构体的值
	struct stu* s1 = &s;
	showStu2(s1);
	printf("%s %d %d %f\n", s.name, s.age, s.Id, s.score);		//传入地址则会修改结构体的值
	showStu2(s1);
	printf("%s %d %d %f\n", s.name, s.age, s.Id, s.score);		//想既节省资源，也想防止误操作
}
int main(void)
{
	test01();
	return EXIT_SUCCESS;
}