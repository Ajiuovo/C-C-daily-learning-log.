#define _CRT_SECURE_NO_WARNINGS			//һ���÷��ڵ�һ��
#include <stdio.h>
int main0601(void)
{
	char ch[5] = { 'h','e','l','l','d' };
	char str[6] = { 'h','e','l','l','d','\0' };
	//printf("%s", ch);	//������ ����Ϊ���ַ������������β����'\0'
	printf("%s", str);	//��������
	return 0;
}
//��ϰ��ͳ���ַ����ַ����ִ���
int main0602(void)
{
	char str[100] = {0};    //��ֵΪ0�൱�ڸ�ֵΪ'\0'
	scanf("%[^\n]s", str);		//����������ʹ����ַ
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
			printf("%c�ַ����ַ����г���%d��\n", i+'a', counter[i]);
		}

	}
	return 0;
}