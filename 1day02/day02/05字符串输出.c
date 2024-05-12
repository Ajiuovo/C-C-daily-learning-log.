#include <stdio.h>

int main05(void)
{
	char str[] = "hello world";
	char str1[20] = "hello world";
	char str2[2]={'h','e'};
	char test[100] = "fjawngop anpofjwpagjvnoajpzjpdM";
	printf("%s\n", str2);   //定义str2时没有以'/0'结尾，所以打出来了乱码
	return 0;
}