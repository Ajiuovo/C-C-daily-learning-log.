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
	//结构体成员操作方式
	//①.成员选择（对象）  对象.成员名
	//②->成员选择（指针）  对象指针->成员名
	s->name = malloc(sizeof(char) * 21);
	s->age = 18;
	strcpy(s->name, "张三");
	printf("%s  %d\n", s->name, s->age);
	free(s->name);
	s->name = NULL;
	return EXIT_SUCCESS;
}