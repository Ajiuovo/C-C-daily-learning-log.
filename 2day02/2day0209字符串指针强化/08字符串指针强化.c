#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//1���ַ������ʼ��
void test01()
{	/*
	//��
	char str[] = { 'h','e','l' };			
	printf("%s\n", str);			//��ʼ��ʱû�н�����ʶ����ӡ���
	
	//��
	char str2[10] = { 'h','e','l' };
	printf("%s\n", str2);			//��ʼ��ʱָ���ַ����鳤�ȣ�û�г�ʼ���ĵط�Ĭ��Ϊ0������ʶ
	
	//��
	char str3[] = "hello";
	printf("%s\n", str3);
	printf("%d\n", sizeof(str3));		//���ַ�����ʼ����Ĭ�����ַ���β����ӽ�����ʶ0
	printf("%d\n", strlen(str3));		//strlen��ͳ�ƽ�����ʶ

	char str5[] = "hello\0";		//ĩβ��'\0'�Ļ��Ͳ����ټ���
	printf("%s\n", str5);
	printf("%d\n", sizeof(str5));
	printf("%d\n", strlen(str5));

	char str6[] = "hello\0w";		//�ַ�������'\0'����βû�У��Ի����
	printf("%s\n", str6);
	printf("%d\n", sizeof(str6));
	printf("%d\n", strlen(str6));

	//��
	char str4[10] = "hello";
	printf("%s\n", str4);
	printf("%d\n", sizeof(str4));		//��ʼ��ʱָ�����ȵĻ���sizeof��ʾ�ĳ�ʼ�������鳤��
	printf("%d\n", strlen(str4));

	*/
	//��
	char str7[] = "hello\012world";			//\012��д�ᱻ����ת���ַ����˽��Ƶ�12��10��Ϊ���У���������ASCIIa��97  A��65
	printf("%s\n", str7);
	printf("%d\n", sizeof(str7));
	printf("%d\n", strlen(str7));
	
}

//2���ַ�������ʵ��
//�٣������ַ�������ʵ�֣����η��ʣ�����
void copyString01(char* dest, char* src)
{
	int len = strlen(src);
	for (size_t i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
}

//��:�����ַ���ָ����ʵ��
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
//�۸߼��棬whileѭ����������������Ǹ�ֵ��������ֵΪ0ʱ����
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


//3���ַ�����תʵ��
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