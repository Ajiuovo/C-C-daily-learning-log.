#define _CRT_SECURE_NO_WARNINGS			//一定得放在第一行
#include <stdio.h>
int main0601(void)
{
	char ch[5] = { 'h','e','l','l','d' };
	char str[6] = { 'h','e','l','l','d','\0' };
	//printf("%s", ch);	//会乱码 ，因为以字符串输出，但结尾不是'\0'
	printf("%s", str);	//不会乱码
	return 0;
}
//练习：统计字符串字符出现次数
int main0602(void)
{
	char str[100] = {0};    //赋值为0相当于赋值为'\0'
	scanf("%[^\n]s", str);		//数组名本身就代表地址
	//printf("%s\n", str);
	int counter[26] = { 0 };
	for (size_t i = 0; i < 100; i++)
	{
		if ('a' < str[i] < 'z')
		{
			int index = str[i] - 'a';
			counter[index]++;
		}

	}
	for (size_t i = 0; i < 26; i++)
	{
		if (counter[i] != 0)
		{
			printf("%c字符在字符串中出现%d次\n", i+'a', counter[i]);
		}

	}
	return 0;
}