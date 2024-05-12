#define _CRT_SECURE_NO_WARNINGS			//一定得放在第一行
#include <stdio.h>
#include <string.h>
#include <Windows.h>

//gets函数
int main0701(void)
{
	char str[100];
	printf("获取的字符串为：%s\n", gets(str));
	printf("%s", str);
	return 0;
}

//fgets函数
int main0702(void)
{
	char str[12];
	printf("获取的字符串为：%s\n", fgets(str,sizeof(str),stdin));//会预留'\0'存储空间，'\n'如果存储空间足够也会正常读入
	printf("%s", str);
	return 0;
}

//puts函数： int puts(const char *s);参1：待写出字符串。成功返回非负数0，失败返回-1
int main0703(void)
{
	char str[12];
	printf("获取的字符串为：%s\n", fgets(str, sizeof(str), stdin));
	puts(str);   //输出字符串后自动换行
	//printf("%s", str);
	return EXIT_SUCCESS;
}

//fputs函数：int fputs(const char *str, FILE *stream)   输出位置：屏幕对应为标准输出stdout
int main0704(void)
{
	char str[12];
	printf("获取的字符串为：%s\n", fgets(str, sizeof(str), stdin));
	fputs(str,stdout);   //输出字符串后不会自动换行
	int ref = fputs("hello", stdout);
	printf("ref = %d", ref);
	return EXIT_SUCCESS;
}

//strlen函数：获取字符串的有效长度
int main0705(void)
{
	char str[100];
	printf("获取的字符串为：%s\n", gets(str));
	printf("%s\n", str);
	printf("%d\n ", strlen(str));
	printf("%d", sizeof(str));
	return 0;
}

//实现strlen函数
int main0706(void)
{
	char str[100];
	char str2[] = "hello\0world";
	printf("获取的字符串为：%s\n", gets(str));
	int i = 0;
	int sum = 0;
	while (str2[i] != '\0')
	{
		sum++;
		i++;
	}
	printf("%d\n", sum);
	return EXIT_SUCCESS;
}

//实现strcpy函数，追加字符串
int main0707(void)
{
	char str1[] = "hello";
	char str2[] = "world";
	char str3[100] = { 0 };
	int i = 0;
	while (str1[i])
	{
		str3[i] = str1[i];
		i++;
	}
	int j = 0;
	while (str2[j])
	{		
		str3[i] = str2[j];
		j++;
		i++;
	}
	fputs(str3, stdout);
	return EXIT_SUCCESS;
}