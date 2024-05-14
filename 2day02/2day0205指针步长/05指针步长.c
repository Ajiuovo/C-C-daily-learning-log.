#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stddef.h>			//offsetof的头文件

//指针步长：指针+1走多少个字节
void test01()
{
	char* p = NULL;
	printf("%d\n", p);
	printf("%d\n", p + 1);

	double* p2 = NULL;
	printf("%d\n", p2);
	printf("%d\n", p2 + 1);
}

//2、解引用时，解出的字节数
void test02()
{
	char buf[1024] = { 0 };
	int a = 1000;
	memcpy(buf + 1, &a, sizeof(int));
	char* p = buf;
	printf("%d\n", *(int*)(p + 1));

}
//步长练习
struct Person
{
	char a;
	int b;
	char buf[64];
	int d;
};
void test03()
{
	struct Person p = { 'a',10,"hello",20 };
	char* pp = &p;
	printf("d属性的值为 %d\n", *(int*)(pp + 72));
	printf("d属性的偏移量为 %d\n", offsetof(struct Person, d));
}
int main(void)
{

	//test01();
	//test02();
	test03();
	return EXIT_SUCCESS;
}