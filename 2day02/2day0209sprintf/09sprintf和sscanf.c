#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//作用1：拼接字符串
void test01()
{
	//①
	char buf[1024];
	memset(buf, 0, 1024);
	sprintf(buf, "今天%d年 %d月 %d日", 2024, 5, 12);
	printf("%s\n", buf);
	//②
	memset(buf, 0, 1024);
	char str1[] = "hello";
	char str2[] = "hello";
	int ret = sprintf(buf, "%s %s", str1, str2);		//返回值是字符串长度，不包含\0
	printf("%s  %d\n", buf, ret);

	//③数字转字符串
	memset(buf, 0, 1024);
	int num = 100;
	sprintf(buf, "%d", num);
	printf("%s\n", buf);
}

//sscanf：对字符串做格式化接收。

//1. %*s%s 或者 %*d%s  跳过字符或跳过数字
void test02()
{
	char* str = "1234afas";
	char buf[1024] = { 0 };
	sscanf(str, "%*d%s", buf);
	printf("%s\n", buf);
}
void test03()
{	
	//解决方式①：解决方式：字母与数字之间加空格或制表符\t，sscanf的忽略碰到这些会结束
	char* str = "afas 1234";
	char* str2 = "afas1234";
	char buf[1024] = { 0 };
	
	sscanf(str, "%*s%s", buf);			//不行，1234会被包含在字符串中一起被忽略，
	//解决方式②:指定忽略范围
	sscanf(str, "%*[a-z]%s", buf);
	
	printf("%s\n", buf);
}

//2. %[width]s  读指定宽度的数据
void test04()
{
	char* str = "124124gaws";
	char buf[1024] = { 0 };
	sscanf(str, "%5s", buf);
	printf("%s\n", buf);

}
//3. %[a-z] 匹配a-z中任意字符（尽可能多的匹配）,遇到一个匹配失败就会停下来
void test05()
{
	char* str = "124124awgs";
	char buf[1024] = { 0 };
	sscanf(str, "%*d%[a-g]", buf);
	printf("%s\n", buf);
}
void test06()
{
	char* str = "124124awgs";
	char buf[1024] = { 0 };
	sscanf(str, "%[0-9]", buf);
	printf("%s\n", buf);
}

//4. %[abC] 贪婪匹配，只匹配这些字符,遇到一个匹配失败就会停下来
void test07()
{
	char* str = "AabDC";
	char buf[1024] = { 0 };
	sscanf(str, "%[abC]", buf);
	printf("%s\n", buf);
}

//5. %[^a] 贪婪匹配，只要不是该字符都匹配,遇到一个匹配失败就会停下来
void test08()
{
	char* str = "AabDC";
	char buf[1024] = { 0 };
	sscanf(str, "%[^D]", buf);
	printf("%s\n", buf);
}
//6. %[^a-z] 贪婪匹配，只要不是该字符范围都匹配,遇到一个匹配失败就会停下来
void test09()
{
	char* str = "AabDC";
	char buf[1024] = { 0 };
	sscanf(str, "%[^B-D]", buf);
	printf("%s\n", buf);
}

//练习1：多参数匹配
void test10()
{
	char* ip = "127.0.0.1";
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	sscanf(ip, "%d.%d.%d.%d", &num1,&num2,&num3,&num4);
	printf("%d.%d.%d.%d\n", num1, num2, num3, num4);
}

//练习2：带干扰的多参数匹配
void test11()
{
	char* input = "avaihwgo#tjut@123456";
	char buf[1024] = { 0 };
	sscanf(input, "%*[^#]#%[^@]",buf);
	printf("%s\n",buf);
}

//练习3：匹配myname
void test12()
{
	char* input = "123abcd$myname@000qwe";
	char buf[1024] = { 0 };
	sscanf(input, "%*[^$]$%[^@]", buf);
	printf("%s\n", buf);
}
//练习4：匹配helloworld和itcast.cn
void test13()
{
	char* input = "helloworld@itcast.cn";
	char buf[1024] = { 0 };
	char buf2[1024] = { 0 };
	sscanf(input, "%[^@]@%s", buf, buf2);
	printf("%s\n", buf);
	printf("%s\n", buf2);
}

int main(void)
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	//test08();
	//test09();
	//test10();
	//test11();
	//test12();
	test13();
	return EXIT_SUCCESS;
}