#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main09(void)
{
	char str[] = "www.baidu.com";
	//char *str2 = "www.baidu.com";		//不可以,这是字符串常量，而strtok会改变原串，常量不可被改变。
	//strtok("www.baidu.com", ".");			//不可以,这样传入的也是字符串常量。

	char *p=strtok(str, ".");			//第一次拆分，参数1传  待拆分的原串
	printf("%s\n", p);	
	while (p!=NULL)
	{
		//strtok(str, ".");			//不可以，str的第一个分隔符处已被替换为'\0'
		p=strtok(NULL,".");			//再次拆分时，参数1要设置为NULL。函数内部有一个静态变量，记录着第一次拆分剩下的字串，设置为NULL后，自动传入该静态变量。
		printf("%s\n", p);
	}
	/*for (size_t i = 0; i < 13; i++)
	{
		printf("%c ", str[i]);
	}
	printf("\n");*/
	return EXIT_SUCCESS;
}