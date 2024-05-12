#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//1、字符数组初始化
void test01()
{	/*
	//①
	char str[] = { 'h','e','l' };			
	printf("%s\n", str);			//初始化时没有结束标识，打印溢出
	
	//②
	char str2[10] = { 'h','e','l' };
	printf("%s\n", str2);			//初始化时指定字符数组长度，没有初始化的地方默认为0结束标识
	
	//③
	char str3[] = "hello";
	printf("%s\n", str3);
	printf("%d\n", sizeof(str3));		//以字符串初始化，默认在字符串尾部添加结束标识0
	printf("%d\n", strlen(str3));		//strlen不统计结束标识

	char str5[] = "hello\0";		//末尾有'\0'的话就不会再加了
	printf("%s\n", str5);
	printf("%d\n", sizeof(str5));
	printf("%d\n", strlen(str5));

	char str6[] = "hello\0w";		//字符串中有'\0'但结尾没有，仍会添加
	printf("%s\n", str6);
	printf("%d\n", sizeof(str6));
	printf("%d\n", strlen(str6));

	//④
	char str4[10] = "hello";
	printf("%s\n", str4);
	printf("%d\n", sizeof(str4));		//初始化时指定长度的话则sizeof显示的初始化的数组长度
	printf("%d\n", strlen(str4));

	*/
	//⑤
	char str7[] = "hello\012world";			//\012连写会被当成转义字符，八进制的12（10，为换行），常见的ASCIIa是97  A是65
	printf("%s\n", str7);
	printf("%d\n", sizeof(str7));
	printf("%d\n", strlen(str7));
	
}

//2、字符串拷贝实现
//①：当成字符数组来实现，依次访问，复制
void copyString01(char* dest, char* src)
{
	int len = strlen(src);
	for (size_t i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
}

//②:利用字符串指针来实现
void copyString02(char* dest, char* src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
//③高级版，while循环结束条件，如果是赋值操作，赋值为0时结束
void copyString03(char* dest, char* src)
{
	while (*dest++ = *src++){}
}

void test02()
{
	char* str = "helloworld";
	char buf[1024];
	//copyString01(buf, str);
	//copyString02(buf, str);
	copyString03(buf, str);
	printf("%s", buf);
}


//3、字符串翻转实现
void reverseString(char *str)
{

}
void test03()
{
	char str[] = "hjelllegopja";
	reverseString(str);
}



int main(void)
{
	//test01();
	test02();
	return EXIT_SUCCESS;
}