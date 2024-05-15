#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//����1��ƴ���ַ���
void test01()
{
	//��
	char buf[1024];
	memset(buf, 0, 1024);
	sprintf(buf, "����%d�� %d�� %d��", 2024, 5, 12);
	printf("%s\n", buf);
	//��
	memset(buf, 0, 1024);
	char str1[] = "hello";
	char str2[] = "hello";
	int ret = sprintf(buf, "%s %s", str1, str2);		//����ֵ���ַ������ȣ�������\0
	printf("%s  %d\n", buf, ret);

	//������ת�ַ���
	memset(buf, 0, 1024);
	int num = 100;
	sprintf(buf, "%d", num);
	printf("%s\n", buf);
}

//sscanf�����ַ�������ʽ�����ա�

//1. %*s%s ���� %*d%s  �����ַ�����������
void test02()
{
	char* str = "1234afas";
	char buf[1024] = { 0 };
	sscanf(str, "%*d%s", buf);
	printf("%s\n", buf);
}
void test03()
{	
	//�����ʽ�٣������ʽ����ĸ������֮��ӿո���Ʊ��\t��sscanf�ĺ���������Щ�����
	char* str = "afas 1234";
	char* str2 = "afas1234";
	char buf[1024] = { 0 };
	
	sscanf(str, "%*s%s", buf);			//���У�1234�ᱻ�������ַ�����һ�𱻺��ԣ�
	//�����ʽ��:ָ�����Է�Χ
	sscanf(str, "%*[a-z]%s", buf);
	
	printf("%s\n", buf);
}

//2. %[width]s  ��ָ����ȵ�����
void test04()
{
	char* str = "124124gaws";
	char buf[1024] = { 0 };
	sscanf(str, "%5s", buf);
	printf("%s\n", buf);

}
//3. %[a-z] ƥ��a-z�������ַ��������ܶ��ƥ�䣩,����һ��ƥ��ʧ�ܾͻ�ͣ����
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

//4. %[abC] ̰��ƥ�䣬ֻƥ����Щ�ַ�,����һ��ƥ��ʧ�ܾͻ�ͣ����
void test07()
{
	char* str = "AabDC";
	char buf[1024] = { 0 };
	sscanf(str, "%[abC]", buf);
	printf("%s\n", buf);
}

//5. %[^a] ̰��ƥ�䣬ֻҪ���Ǹ��ַ���ƥ��,����һ��ƥ��ʧ�ܾͻ�ͣ����
void test08()
{
	char* str = "AabDC";
	char buf[1024] = { 0 };
	sscanf(str, "%[^D]", buf);
	printf("%s\n", buf);
}
//6. %[^a-z] ̰��ƥ�䣬ֻҪ���Ǹ��ַ���Χ��ƥ��,����һ��ƥ��ʧ�ܾͻ�ͣ����
void test09()
{
	char* str = "AabDC";
	char buf[1024] = { 0 };
	sscanf(str, "%[^B-D]", buf);
	printf("%s\n", buf);
}

//��ϰ1�������ƥ��
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

//��ϰ2�������ŵĶ����ƥ��
void test11()
{
	char* input = "avaihwgo#tjut@123456";
	char buf[1024] = { 0 };
	sscanf(input, "%*[^#]#%[^@]",buf);
	printf("%s\n",buf);
}

//��ϰ3��ƥ��myname
void test12()
{
	char* input = "123abcd$myname@000qwe";
	char buf[1024] = { 0 };
	sscanf(input, "%*[^$]$%[^@]", buf);
	printf("%s\n", buf);
}
//��ϰ4��ƥ��helloworld��itcast.cn
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