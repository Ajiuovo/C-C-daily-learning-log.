#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct info
{
	//成员列表
	char *name;			//若结构体内有指针成员，则必须初始化
	//char name[20];
	int age;
};
void fun01(struct info s)
{
	strcpy(s.name, "里斯");
	s.age = 19;
	//printf("%s,%d\n", s.name, s.age);		//值传递，不会改变原s的值
}
void fun02(struct info *s)
{
	strcpy(s->name, "里斯");
	s->age = 20;
	//printf("%s %d\n", s->name, s->age);		//会改变原s的值
}
struct info fun03(struct info s)
{
	strcpy(s.name, "王五");
	s.age = 21;
	return s;
	//printf("%s %d\n", s->name, s->age);		//会改变原s的值
}
int main11(void)
{
	//struct info s ;		//若结构体内有指针成员，则必须初始化，经过test.c排查  也不是指针成员的问题，可能这段程序抽风了所以会报未初始化的问题
	//strcpy(s.name, "张三");
	//s.age = 18;
	struct info s = { "张三",18 };
	printf("s %s %d\n", s.name, s.age);
	fun01(s);
	printf("s1 %s %d\n", s.name, s.age);	//值传递，不会改变原s的值
	fun02(&s);
	printf("s2 %s %d\n", s.name, s.age);	//地址传递，会改变原s的值
	fun03(s);
	printf("s3 %s %d\n", s.name, s.age);	//返回值，不接受，不会改变原s的值
	s = fun03(s);
	printf("s4 %s %d\n", s.name, s.age);	//返回值，接收，会改变原s的值
	return EXIT_SUCCESS;
}