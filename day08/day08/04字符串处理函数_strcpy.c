#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>			//包含了所有字符串处理函数
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main04(void)
{	
	char dest[10] = { 0 };
	char dest2[10] = { 0 };
	char* src = "helloworld!";
	strcpy(dest, src);
	printf("%s\n", dest);
	strncpy(dest2, src,10);		//只拷贝n个字节，默认不添加\0。
	printf("%s\n", dest2);

	return EXIT_SUCCESS;
}