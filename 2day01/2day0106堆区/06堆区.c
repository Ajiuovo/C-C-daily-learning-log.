#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int* getSpace()
{
	int* p = malloc(sizeof(int) * 5);
	if (p == NULL)
	{
		perror("malloc error");
	}
	for (size_t i = 0; i < 5; i++)
	{
		p[i] = i + 10;
	}
	return p;
}
void test01()
{
	int* p = getSpace();
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);
	}
	//手动开辟，手动释放
	free(p);
	p = NULL;	//避免成为野指针
}
//注意事项

void allocateSpace(char* pp)
{
	char* temp = malloc(100);
	memset(temp, 0, 100);
	strcpy(temp, "hello,world.");
	pp = temp;
}
void test02()
{
	char* p = NULL;
	allocateSpace(p);			//p值不会返回回来。
	printf("%s\n", p);
}

void allocateSpace2(char** pp)
{
	char* temp = malloc(100);
	memset(temp, 0, 100);
	strcpy(temp, "hello,world.");
	*pp = temp;
}
void test03()
{
	char* p = NULL;
	allocateSpace2(&p);			//p值不会返回回来。
	printf("%s\n", p);
}

int main(void)
{
	//test01();
	//test02();
	test03();
	return EXIT_SUCCESS;
}