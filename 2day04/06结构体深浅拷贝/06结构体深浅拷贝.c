#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
typedef struct MyStruct
{
	char name[64];
	int age;

}stu;
void test01()
{
	stu st1 = { "Tom",18 };
	stu st2 = { "Alice",19 };
	printf("%s %d\n", st1.name, st1.age);
	printf("%s %d\n", st2.name, st2.age);
	//浅拷贝  栈区中逐字节拷贝
	st1 = st2;
	printf("%s %d\n", st1.name, st1.age);
	printf("%s %d\n", st2.name, st2.age);

}
typedef struct MyStruct2
{
	char* name;
	int age;

}stu2;
void test02()
{
	stu2 stt1;
	stt1.name = malloc(sizeof(char) * 64);
	strcpy(stt1.name, "Tom");
	stt1.age = 18;
	stu2 stt2;
	stt2.name = malloc(sizeof(char) * 64);
	strcpy(stt2.name, "Alice");
	stt2.age = 19;
	printf("%s %d\n", stt1.name, stt1.age);
	printf("%s %d\n", stt2.name, stt2.age);
	stt1.name = stt2.name;	//会导致堆区内存重复释放、内存泄露	
	//strcpy(stt1.name, stt2.name);  //好像这种也可以
	//stt1.age = stt2.age;
	printf("%s %d\n", stt1.name, stt1.age);
	printf("%s %d\n", stt2.name, stt2.age);
	if (stt1.name != NULL)
	{
		free(stt1.name);
		
	}
	if (stt2.name != NULL)
	{
		free(stt2.name);
		stt2.name = NULL;
	}
}
//解决方案：深拷贝：手动赋值
void test03()
{
	stu2 stt1;
	stt1.name = malloc(sizeof(char) * 64);
	strcpy(stt1.name, "Tom");
	stt1.age = 18;
	stu2 stt2;
	stt2.name = malloc(sizeof(char) * 64);
	strcpy(stt2.name, "Alice");
	stt2.age = 19;
	printf("%s %d\n", stt1.name, stt1.age);
	printf("%s %d\n", stt2.name, stt2.age);
	//先释放原堆区的内容
	if (stt1.name != NULL)
	{
		free(stt1.name);
		stt1.name = NULL;
	}
	//在堆区重新创建空间
	stt1.name = malloc(strlen(stt2.name) + 1);
	//重新赋值
	strcpy(stt1.name, stt2.name);
	stt1.age = stt2.age;
	printf("%s %d\n", stt1.name, stt1.age);
	printf("%s %d\n", stt2.name, stt2.age);
	if (stt1.name != NULL)
	{
		free(stt1.name);

	}
	if (stt2.name != NULL)
	{
		free(stt2.name);
		stt2.name = NULL;
	}
}
int main(void)
{
	//test01();
	test02();
	return EXIT_SUCCESS;
}