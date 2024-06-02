#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//1.
void test01()
{
	char ch;
	FILE* fw = fopen("./test.txt", "r");
	if (!fw)
	{
		return;
	}
	while (!feof(fw))		//这样读会多读到一个EOF字符
	{
		ch = fgetc(fw);
		printf("%c", ch);
	}
	fclose(fw);
}
//2.
typedef struct Teacher
{
	char* name;		//如果属性开辟到堆区，不要存指针到文件中，要将指针指向的内容存放到文件中
	int b;
}tec;
int main(void)
{
	test01();

	return EXIT_SUCCESS;
}