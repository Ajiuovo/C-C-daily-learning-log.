#define _CRT_SECURE_NO_WARNINGS			//һ���÷��ڵ�һ��
#include <stdio.h>
#include <string.h>
#include <Windows.h>

//gets����
int main0701(void)
{
	char str[100];
	printf("��ȡ���ַ���Ϊ��%s\n", gets(str));
	printf("%s", str);
	return 0;
}

//fgets����
int main0702(void)
{
	char str[12];
	printf("��ȡ���ַ���Ϊ��%s\n", fgets(str,sizeof(str),stdin));//��Ԥ��'\0'�洢�ռ䣬'\n'����洢�ռ��㹻Ҳ����������
	printf("%s", str);
	return 0;
}

//puts������ int puts(const char *s);��1����д���ַ������ɹ����طǸ���0��ʧ�ܷ���-1
int main0703(void)
{
	char str[12];
	printf("��ȡ���ַ���Ϊ��%s\n", fgets(str, sizeof(str), stdin));
	puts(str);   //����ַ������Զ�����
	//printf("%s", str);
	return EXIT_SUCCESS;
}

//fputs������int fputs(const char *str, FILE *stream)   ���λ�ã���Ļ��ӦΪ��׼���stdout
int main0704(void)
{
	char str[12];
	printf("��ȡ���ַ���Ϊ��%s\n", fgets(str, sizeof(str), stdin));
	fputs(str,stdout);   //����ַ����󲻻��Զ�����
	int ref = fputs("hello", stdout);
	printf("ref = %d", ref);
	return EXIT_SUCCESS;
}

//strlen��������ȡ�ַ�������Ч����
int main0705(void)
{
	char str[100];
	printf("��ȡ���ַ���Ϊ��%s\n", gets(str));
	printf("%s\n", str);
	printf("%d\n ", strlen(str));
	printf("%d", sizeof(str));
	return 0;
}

//ʵ��strlen����
int main0706(void)
{
	char str[100];
	char str2[] = "hello\0world";
	printf("��ȡ���ַ���Ϊ��%s\n", gets(str));
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

//ʵ��strcpy������׷���ַ���
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