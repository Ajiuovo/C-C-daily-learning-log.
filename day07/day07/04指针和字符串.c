#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main04(void)
{
	char str1[] = { 'h','e','l','l','o','\0' };
	char str2[] = "hello";
	char* str3 = "hello";
	// char* str4= { 'h','e','l','l','o','\0' };//���У����󣡣���
	str1[0] = 'r';
	str2[0] = 'r';
	//str3[0] = 'r';			//���У�str3�����������һ���ַ��������������޸�
	//*str3 = "hi";				//���У�str3�����������һ���ַ��������������޸�
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	return EXIT_SUCCESS;
}