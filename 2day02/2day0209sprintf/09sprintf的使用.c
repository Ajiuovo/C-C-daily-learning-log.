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
	sprintf(buf, "%d",num);
	printf("%s\n", buf);
}
int main(void)
{
	test01();
	return EXIT_SUCCESS;
}