#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct tecinfo
{
	//char name[21];		//栈空间内
	char* name;			//后续需要开辟堆空间辅助
	int age;

}t;
int main09(void)
{
	struct tecinfo * p = (struct tecinfo*)malloc(sizeof(t));
	p->name =(char *) malloc(sizeof(char) * 21);
	p->age = 18;
	strcpy(p->name, "张三");
	printf("%s  %d\n", p->name, p->age);
	printf("%s  %d\n", t.name, t.age);		//p和t没有关系，只是创建了一个新的堆空间，大小和t的空间一样。是两个结构体变量
	free(p->name);
	p->name = NULL;
	free(p);
	p = NULL;
	return EXIT_SUCCESS;
}