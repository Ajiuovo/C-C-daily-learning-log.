#include <stdio.h>

int main05(void)
{
	char str[] = "hello world";
	char str1[20] = "hello world";
	char str2[2]={'h','e'};
	char test[100] = "fjawngop anpofjwpagjvnoajpzjpdM";
	printf("%s\n", str2);   //����str2ʱû����'/0'��β�����Դ����������
	return 0;
}